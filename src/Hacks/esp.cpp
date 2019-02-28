#include "esp.h"

// -- Settings

// Enabled
bool Settings::ESP::enabled;

/* Player */

// ~~ Box ~~ //
bool Settings::ESP::Box::enabled = false;
Color Settings::ESP::Box::Terrorist::col = Color(40, 204, 67);
Color Settings::ESP::Box::Terrorist::col_ign = Color(0, 124, 255);
Color Settings::ESP::Box::Counter_Terrorist::col = Color(204, 173, 40);
Color Settings::ESP::Box::Counter_Terrorist::col_ign = Color(255, 69, 0);

// ~~ Snaplines ~~ //
bool Settings::ESP::Snaplines::enabled;

// ~~ Skeleton ~~ //
bool Settings::ESP::Skeleton::enabled = false;

// ~~ Filters ~~ //
bool Settings::ESP::Filters::enemy_only = false;
bool Settings::ESP::Filters::visual_only = false;

// ~~ Info ~~ //
bool Settings::ESP::Info::name = false;
bool Settings::ESP::Info::scoped = false;
bool Settings::ESP::Info::planting = false;
bool Settings::ESP::Info::defusing = false;
bool Settings::ESP::Info::grabbingHostage = false;
bool Settings::ESP::Info::rescuing = false;
bool Settings::ESP::Info::Health::enabled = false;
int Settings::ESP::Info::Health::type = 0;
bool ComboBox::Health::opend;

// ~~ NoScope ~~ //
bool Settings::NoScope::enabled = false;

// ~~ ScreenshotCleaner ~~ //
bool Settings::ScreenshotCleaner::enabled = false;

// -- Settings

void DrawSkeleton(C_BaseEntity* pEntity, Color color) 
{
    studiohdr_t* pStudioModel = pModelInfo->GetStudioModel(pEntity->GetModel());
    
    if (!pStudioModel)
        return;
    static matrix3x4_t pBoneToWorldOut[128];
    if (!pEntity->SetupBones(pBoneToWorldOut, 128, 256, 0))
        return;
    
    for (int i = 0; i < pStudioModel->numbones; i++) {
        mstudiobone_t* pBone = pStudioModel->pBone(i);
        if (!pBone || !(pBone->flags & 256) || pBone->parent == -1)
            continue;
        
        Vector vBone1 = pEntity->GetBonePosition(i);
        Vector vBone2 = pEntity->GetBonePosition(pBone->parent);
        Vector vBoneOut1;
        Vector vBoneOut2;
        
        if(WorldToScreen(vBone1, vBoneOut1) && WorldToScreen(vBone2, vBoneOut2)) {
            draw->drawline(vBoneOut1.x, vBoneOut1.y, vBoneOut2.x, vBoneOut2.y, color);
        }
    }
}

void DrawScope(C_BaseEntity* local) 
{
    if(!Settings::NoScope::enabled || !local || (local && !local->IsScoped()))
        return;

    auto weapon = GetActiveWeapon(local);
    if(!weapon)
        return;

    if(*weapon->GetItemDefinitionIndex() == WEAPON_AUG || *weapon->GetItemDefinitionIndex() == WEAPON_SG556)
        return;

    int w, h;
    pEngine->GetScreenSize(w, h);

    draw->drawline(w / 2, 0, w / 2, h, Color::Black());
    draw->drawline(0, h / 2, w, h / 2, Color::Black());
}

void DrawHealthbar(int x, int y, int w, int h, int health, Color color) 
{
    if(health > 100) {
        health = 100;
    }
    int hw = h - ((h) * health) / 100;
    draw->fillrgba(x, y - 1, w, h + 2, Color(0, 0, 0, 200));
    draw->fillrgba(x, y + hw - 1, w, h - hw + 2, color);
    draw->drawbox(x, y - 1, w, h + 2, Color(0, 0, 0, 200));
    
}

void DrawPlayerESP() 
{
    if(!Settings::ESP::enabled)
        return;
    
    if(Settings::ScreenshotCleaner::enabled && pEngine->IsTakingScreenshot())
        return;
    
    int width, height;
    pEngine->GetScreenSize(width, height);
    
    auto* local = pEntList->GetClientEntity(pEngine->GetLocalPlayer());
    
    for(int i = 0; i < pEntList->GetHighestEntityIndex(); i++) {
        auto* entity = pEntList->GetClientEntity(i);
        
        if(!entity)
            continue;
        
        if(entity->GetHealth() < 1)
            continue;
        
        if(entity->GetDormant())
            continue;
        
        if(entity->GetTeam() != 2 && entity->GetTeam() != 3)
            continue;

        if(entity->GetGhost())
            continue;
        
        if(Settings::ESP::Filters::enemy_only && entity->GetTeam() == local->GetTeam())
            continue;
        
        player_info_t info;
        
        pEngine->GetPlayerInfo(i, &info);
        
        auto vis = IsVisible(local, entity);
        
        Color playercolor = [&]() -> Color
        {
            if(entity->GetTeam() == 3) // CT
                return vis ? GetColorBase(Settings::ESP::Box::Counter_Terrorist::col) : GetColorBase(Settings::ESP::Box::Counter_Terrorist::col_ign);
            else if(entity->GetTeam() == 2) // T
                return vis ? GetColorBase(Settings::ESP::Box::Terrorist::col) : GetColorBase(Settings::ESP::Box::Terrorist::col_ign);
        }();
        
        boxstruct box;
        
        if(DrawPlayerBox(entity, box))
        {            
            if(Settings::ESP::Box::enabled)
                draw->drawboxoutline(box.x, box.y, box.w, box.h, playercolor);
            
            if(Settings::ESP::Info::name)
                draw->drawstring(box.x + box.w / 2, box.y - 12, Color::White(), eFont, info.name, true);
            
            if(Settings::ESP::Info::Health::enabled) {
                if(Settings::ESP::Info::Health::type == 0)
                    return DrawHealthbar(box.x - 5, box.y, 3, box.h, entity->GetHealth(), Color::Green());
                if(Settings::ESP::Info::Health::type == 1)
                    return draw->drawstring(box.x + box.w / 2, box.y + box.h + 8, Color::White(), eFont, std::to_string(entity->GetHealth()).c_str(), true);
            }
            
            if(Settings::ESP::Snaplines::enabled)
                draw->drawline(width / 2, height, box.x + box.w / 2, box.y + box.h, playercolor);
            
            if(Settings::ESP::Skeleton::enabled)
                DrawSkeleton(entity, Color::White());

            if(Settings::ESP::Info::defusing)
                if(entity->IsDefusing())
                    draw->drawstring(box.x + box.w / 2, box.y - 27, Color::Red(), eFont, "DEFUSING", true);
            
            if(Settings::ESP::Info::scoped)
                if((entity->IsScoped()))
                    draw->drawstring(box.x + box.w / 2, box.y - 27, Color::Red(), eFont, "SCOPED", true);   
        }   
    }
}


/* Display menu */
void drawMenu()
{    
    if(pInputSystem->IsButtonDown(KEY_INSERT))
    {
        UI::isVisible = !UI::isVisible;
    }
    
}

