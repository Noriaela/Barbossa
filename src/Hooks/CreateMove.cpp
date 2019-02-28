/*
*
* CreateMove.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

#include "../Hacks/aimbot.h"
#include "../Hacks/antiaim.h"
#include "../Hacks/autoshoot.h"
#include "../Hacks/bhop.h"
#include "../Hacks/clantag.h"
#include "../Hacks/spammer.h"
#include "../Hacks/triggerbot.h"

Vector tpangles;
bool* bSendPacket = nullptr;

// -- Settings 

bool Settings::AntiUntrust::enabled = true;

// -- Settings 

string GetLocalName() {
    player_info_t localInfo;
    pEngine->GetPlayerInfo(pEngine->GetLocalPlayer(), &localInfo);
    return localInfo.name;
}

void hacks(CUserCmd* cmd, C_BaseEntity* local, C_BaseCombatWeapon* weapon, Vector& vOldAngles, bool& sendpacket) {
    DoAutoStrafe(cmd, local);
    DoBhop(cmd, local);
    DoAim(cmd, local, weapon, sendpacket);
    DoAntiaim(cmd, local, weapon, sendpacket);
    ContinuousPistols(cmd, weapon); // will continously fire pistol when trigger is  held
    DoTrigger(cmd);                 // Add triggerbot
    Clantag();                      // Clantag
    DoSpammer();                    // Spammer
    if(draw->m_szChangedValue[2].length() > 0)                      // Name Changer
        ChangeName(draw->m_szChangedValue[2].c_str());    
    if(draw->m_szChangedValue[3].length() > 0 && Settings::Clantag::enabled) // Clantag Changer
        SetClanTag(draw->m_szChangedValue[3].c_str(), "Barbossa");
}

bool bOnce = false;
bool SendPacket = true;
bool hkCreateMove(void* thisptr, float flSampleInput, CUserCmd* cmd) {
    createmoveVMT->GetOriginalMethod<tCreateMove>(CreatmoveIndex)(thisptr, flSampleInput, cmd);
    if(!cmd->command_number)
        return true;
    auto* local = pEntList->GetClientEntity(pEngine->GetLocalPlayer());
    if(!local)
        return false;
    if(local->GetLifeState() != 0)
        return false;
    if(local->GetHealth() < 1)
        return false;
    if(local->GetDormant())
        return false;
    if(bSendPacket == nullptr)
        return false;
    
    if(!bOnce) {
        if(draw->m_szCurrentString[2].empty()) {
            draw->m_szCurrentString[2] = GetLocalName();
        }
        bOnce = true;
    }
    
    C_BaseCombatWeapon* weapon = GetActiveWeapon(local);
    
    if(!weapon)
        return false;
    
    SendPacket = true;
    *bSendPacket = SendPacket;
    
    Vector vOldAngles = cmd->viewangles;
    Vector viewforward, viewright, viewup, aimforward, aimright, aimup;
    Vector qAimAngles;
    float forward = cmd->forwardmove;
    float sidemove = cmd->sidemove;
    float upmove = cmd->upmove;
    
    if(pEngine->IsInGame() && pEngine->IsConnected()) {
        hacks(cmd, local, weapon, vOldAngles, *bSendPacket); 
        if(pInputSystem->IsButtonDown(KEY_N))
            *bSendPacket = false;
        else
            *bSendPacket = true;
        
        FixMovement(vOldAngles, cmd);
        ClampMoves(forward, sidemove, upmove);
        
        if(Settings::AntiUntrust::enabled) {
            cmd->viewangles.ClampAngles();
        }
        if(*bSendPacket)
            tpangles = cmd->viewangles;
    }
    return false;
}