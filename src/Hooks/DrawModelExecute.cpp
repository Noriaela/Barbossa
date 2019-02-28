/*
*
* DrawModelExecute.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

string DirName(string source) {
    source.erase(find(source.rbegin(), source.rend(), '/').base(), source.end());
    return source;
}

string GetWorkingPath() {
    char pathbuf[PROC_PIDPATHINFO_MAXSIZE];
    proc_pidpath(getpid(), pathbuf, sizeof(pathbuf));
    auto dirname = DirName(pathbuf);
    return dirname;
}

bool IsFileExists(const string& name) {
    int res = access(name.c_str(), R_OK);
    if (res < 0) {
        if (errno == ENOENT) {
            return false;
        } else if (errno == EACCES) {
            return true;
        } else {
            return true;
        }
    }
    return true;
}

void AddMaterial(string filename, string type, bool ignorez, bool wireframe) {
    if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append(filename).append(".vmt"))) {
        stringstream ss;
        ss << "\"" + type + "\"\n" << endl;
        ss << "{\n" << endl;
        ss << "\t\"$basetexture\" \"VGUI/white_additive\"\n" << endl;
        ss << "\t\"$nofog\" \"1\"\n" << endl;
        ss << "\t\"$ignorez\" \"" + to_string(ignorez) + "\"\n" << endl;
        ss << "\t\"$wireframe\" \""+ to_string(wireframe) +"\"\n" << endl;
        ss << "\t\"$halflambert\" \"1\"\n" << endl;
        ss << "}\n" << endl;
        ofstream(GetWorkingPath().append("csgo/materials/").append(filename).append(".vmt").c_str()) << ss.str();
    }
}

IMaterial* CreateMaterial(bool ignorez, bool wireframe, string szType) {
    IMaterial* createdMaterial = nullptr; 
    // Texutre
    if(szType == "VertexLitGeneric") {
        if(ignorez) {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_textured_ignorez").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_textured_ignorez", szType, ignorez, wireframe);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_textured_ignorez", TEXTURE_GROUP_MODEL);
        } else {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_textured").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_textured", szType, ignorez, wireframe);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_textured", TEXTURE_GROUP_MODEL);
        }
    }
    // Lit
    if(szType == "UnlitGeneric") {
        if(ignorez) {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_unlit_ignorez").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_unlit_ignorez", szType, ignorez, wireframe);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_unlit_ignorez", TEXTURE_GROUP_MODEL);
        } else {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_unlit").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_unlit", szType, ignorez, wireframe);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_unlit", TEXTURE_GROUP_MODEL);
        }
    }
    // Wireframe
    if(szType == "WireFrame") {
        if(ignorez) {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_unlit_ignorez_wirefame").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_unlit_ignorez_wireframe", szType, ignorez, true);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_unlit_ignorez_wireframe", TEXTURE_GROUP_MODEL);
        } else {
            if (!IsFileExists(GetWorkingPath().append("csgo/materials/").append("barbossa_chamsmat_unlit_wireframe").append(".vmt"))) {
                AddMaterial("barbossa_chamsmat_unlit_wireframe", szType, ignorez, true);
            }
            createdMaterial = pMatSystem->FindMaterial("barbossa_chamsmat_unlit_wireframe", TEXTURE_GROUP_MODEL);
        }
    }
    createdMaterial->IncrementReferenceCount();
    return createdMaterial;
}

void CallOriginalModel(void* thisptr, void* context, void *state, const ModelRenderInfo_t &pInfo, matrix3x4_t* pCustomBoneToWorld) {
    modelVMT->GetOriginalMethod<tDrawModelExecute>(DrawModelExecuteIndex)(thisptr, context, state, pInfo, pCustomBoneToWorld);
}

// -- Settings

// ~~ Weapon Chams ~~ //
bool Settings::ESP::Chams::Weapons::enabled = false;
Color Settings::ESP::Chams::Weapons::col = Color::White();
int Settings::ESP::Chams::Weapons::type = 0;

// ~~ Arm Chams ~~ //
bool Settings::ESP::Chams::Arms::enabled = false;
Color Settings::ESP::Chams::Arms::col = Color::Black();
int Settings::ESP::Chams::Arms::type = 0;

// ~~ Player Chams ~~ //
bool Settings::ESP::Chams::enabled = false;
int Settings::ESP::Chams::type = 0;
Color Settings::ESP::Chams::Terrorist::col = Color(40, 204, 67);
Color Settings::ESP::Chams::Terrorist::col_ign = Color(0, 124, 255);
Color Settings::ESP::Chams::Counter_Terrorist::col = Color(204, 173, 40);
Color Settings::ESP::Chams::Counter_Terrorist::col_ign = Color(255, 69, 0);

// -- Settings

void hkDrawModelExecute(void* thisptr, void* context, void *state, const ModelRenderInfo_t &pInfo, matrix3x4_t* pCustomBoneToWorld) {
    // Texture Layers
    static IMaterial* firstLayer = CreateMaterial(false, false, "VertexLitGeneric");
    static IMaterial* secondLayer = CreateMaterial(true, false, "VertexLitGeneric");
    // Lit Layers
    static IMaterial* firstLit = CreateMaterial(false, false, "UnlitGeneric");
    static IMaterial* secondLit = CreateMaterial(true, false, "UnlitGeneric");
    // Wireframe Layers
    static IMaterial* firstWire = CreateMaterial(false, true, "WireFrame");
    static IMaterial* secondWire = CreateMaterial(true, true, "WireFrame");
    
    if(pInfo.pModel) {
        string pszModel = pModelInfo->GetModelName(pInfo.pModel);
        if(Settings::ScreenshotCleaner::enabled && pEngine->IsTakingScreenshot()) {
            CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
            pModelRender->ForcedMaterialOverride(NULL);
            return;
        }
        // Weapon Chams
        if(pszModel.find("weapons") != string::npos  && Settings::ESP::Chams::Weapons::enabled) {
            IMaterial* materialCheckFirst = [&]() -> IMaterial* {
                if(Settings::ESP::Chams::Weapons::type == 0)
                    return firstLit;
                else if(Settings::ESP::Chams::Weapons::type == 1)
                    return firstLayer;
                else if (Settings::ESP::Chams::Weapons::type == 2)
                    return firstWire;
            }();   
            materialCheckFirst->ColorModulate(Settings::ESP::Chams::Weapons::col);
            materialCheckFirst->AlphaModulate(255 / 255.f);
            pModelRender->ForcedMaterialOverride(materialCheckFirst);
            CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
        }
        // Hand Chams
        if(pszModel.find("arms") != string::npos && Settings::ESP::Chams::Arms::enabled) {
            IMaterial* materialCheckFirst = [&]() -> IMaterial* {
                if(Settings::ESP::Chams::Arms::type == 0)
                    return firstLit;
                else if(Settings::ESP::Chams::Arms::type == 1)
                    return firstLayer;
                else if (Settings::ESP::Chams::Arms::type == 2)
                    return firstWire;
            }();
            materialCheckFirst->ColorModulate(Settings::ESP::Chams::Arms::col);
            materialCheckFirst->AlphaModulate(255 / 255.f);
            pModelRender->ForcedMaterialOverride(materialCheckFirst);
            CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
        }
        // Player Chams
        if(pszModel.find("models/player") != string::npos && Settings::ESP::Chams::enabled) {
            auto* local = pEntList->GetClientEntity(pEngine->GetLocalPlayer());
            auto* entity = pEntList->GetClientEntity(pInfo.entity_index);
            
            if(entity) {
                if(entity->GetHealth() > 0) {
                    Color ColorIgnorez = [&]() -> Color {
                        if(entity->GetTeam() == 2)
                            return Settings::ESP::Chams::Terrorist::col;
                        else if(entity->GetTeam() == 3)
                            return Settings::ESP::Chams::Counter_Terrorist::col;
                    }();
                    Color ColorNonIgnorez = [&]() -> Color {
                        if(entity->GetTeam() == 2)
                            return Settings::ESP::Chams::Terrorist::col_ign;
                        else if(entity->GetTeam() == 3)
                            return Settings::ESP::Chams::Counter_Terrorist::col_ign;
                    }();
                    IMaterial* materialCheckFirst = [&]() -> IMaterial* {
                        if(Settings::ESP::Chams::type == 0)
                            return firstLit;
                        else if(Settings::ESP::Chams::type == 1)
                            return firstLayer;
                        else if (Settings::ESP::Chams::type == 2)
                            return firstWire;
                    }(); 
                    IMaterial* materialCheckSecond = [&]() -> IMaterial* {
                        if(Settings::ESP::Chams::type == 0)
                            return secondLit;
                        else if(Settings::ESP::Chams::type == 1)
                            return secondLayer;
                        else if (Settings::ESP::Chams::type == 2)
                            return secondWire;
                    }();
                    
                    
                    if(Settings::ESP::Filters::enemy_only && local->GetTeam() == entity->GetTeam()) {
                        CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
                        pModelRender->ForcedMaterialOverride(NULL);
                    } else {
                        if(!Settings::ESP::Filters::visual_only) {
                            materialCheckSecond->ColorModulate(ColorNonIgnorez);
                            materialCheckSecond->AlphaModulate(255 / 255.f);
                            pModelRender->ForcedMaterialOverride(materialCheckSecond);
                            CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
                        }
                        materialCheckFirst->ColorModulate(ColorIgnorez);
                        materialCheckFirst->AlphaModulate(255 / 255.f);
                        pModelRender->ForcedMaterialOverride(materialCheckFirst);
                        CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);   
                    }
                }
            }
        }
    }
    CallOriginalModel(thisptr, context, state, pInfo, pCustomBoneToWorld);
    pModelRender->ForcedMaterialOverride(NULL);
}