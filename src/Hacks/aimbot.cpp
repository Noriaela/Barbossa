#include "aimbot.h"
#include "antiaim.h"
#include "autoshoot.h"
#include "autowall.h"

// -- Settings

// Enabled
bool Settings::Aimbot::enabled = false;

// ~~ SilentAim ~~ //
bool Settings::Aimbot::Silent::enabled = false;

// ~~ FOV ~~ //
int Settings::Aimbot::fov = 0;

// ~~ Hitscan ~~ //
bool Settings::Aimbot::Hitscan::enabled = false;
int Settings::Aimbot::Hitscan::type = 0;

// ~~ Prediction ~~ //
bool Settings::Aimbot::Prediction::enabled = false;

// ~~ AutoWall ~~ //
bool Settings::Aimbot::AutoWall::enabled = false;
int Settings::Aimbot::AutoWall::mindmg = 0;

// ~~ No Recoil ~~ //
bool Settings::Aimbot::NoRecoil::enabled = false;

// -- Settings

C_BaseEntity* Aimbot::curTarget = nullptr;

int Hitscan(C_BaseEntity* entity) {
    vector<int> hitboxes;
    hitboxes.push_back(HITBOX_HEAD);
    hitboxes.push_back(HITBOX_NECK);
    hitboxes.push_back(HITBOX_PELVIS);
    hitboxes.push_back(HITBOX_BELLY);
    hitboxes.push_back(HITBOX_THORAX);
    hitboxes.push_back(HITBOX_LOWER_CHEST);
    hitboxes.push_back(HITBOX_UPPER_CHEST);
    hitboxes.push_back(HITBOX_RIGHT_THIGH);
    hitboxes.push_back(HITBOX_LEFT_THIGH);
    hitboxes.push_back(HITBOX_RIGHT_CALF);
    hitboxes.push_back(HITBOX_LEFT_CALF);
    hitboxes.push_back(HITBOX_RIGHT_FOOT);
    hitboxes.push_back(HITBOX_LEFT_FOOT);
    hitboxes.push_back(HITBOX_RIGHT_HAND);
    hitboxes.push_back(HITBOX_LEFT_HAND);
    hitboxes.push_back(HITBOX_RIGHT_UPPER_ARM);
    hitboxes.push_back(HITBOX_RIGHT_FOREARM);
    hitboxes.push_back(HITBOX_LEFT_UPPER_ARM);
    hitboxes.push_back(HITBOX_LEFT_FOREARM);

    if(Settings::Aimbot::Hitscan::enabled) {
        int highestdamage_hitbox = 0;
        int highestdamage = 0;
        
        for(auto hit : hitboxes) {
            Vector vDest = GetHitboxPosition(entity, hit);
            float thisDamage = 0.f;
            Autowall::FireBulletData data;
            thisDamage = Autowall::GetDamage(vDest, true, data);
            
            if(thisDamage > highestdamage) {
                highestdamage = thisDamage;
                highestdamage_hitbox = hit;
            }
        }
        return highestdamage_hitbox;
    } else {
        return Settings::Aimbot::Hitscan::type;
    }
}

void DoAim(CUserCmd* pCmd, C_BaseEntity* local, C_BaseCombatWeapon* weapon, bool& bSendPacket) {
    if(!Settings::Aimbot::enabled)
        return;
    
    Vector eyepos = local->GetEyePosition();
    for(int i = 0; i < pEntList->GetHighestEntityIndex(); i++){
        auto* entity = pEntList->GetClientEntity(i);
        if(!entity)
            continue;
        if(entity == local)
            continue;
        if(entity->GetTeam() == local->GetTeam())
            continue;
        if(entity->GetHealth() < 1)
            continue;
        if(entity->GetDormant())
            continue;
        if(entity->GetImmune())
            continue;
        if(entity->GetGhost())
            continue;
        if(weapon->GetAmmo() < 1)
            continue;
        if(weapon->IsKnife() || weapon->IsBomb())
            continue;
        //if(gCorrections[entity->GetIndex()].whitelist)
            //continue;
        Vector vFrom, vTo;
        Aimbot::curTarget = entity;
        vFrom = GetHitboxPosition(entity, Hitscan(entity));
        if(Settings::Aimbot::Prediction::enabled)
            eyepos += entity->GetVelocity() * pGlobals->interval_per_tick;
        
        vTo = CalcAngle(eyepos, vFrom);
        
        auto isVISIBLE = IsVisible(local, entity);
        float getdmg = 0.f;
        Autowall::FireBulletData data;
        bool canHit = false;
        
        if(Settings::Aimbot::AutoWall::enabled) {
            getdmg = Autowall::GetDamage(vFrom, true, data);
            canHit = getdmg >= Settings::Aimbot::AutoWall::mindmg;
        }
        
        atTargets = vTo;
        
        if(canHit || isVISIBLE) { 
            if(GetFOV(pCmd->viewangles, local->GetEyePosition(), vFrom) <= Settings::Aimbot::fov) {
                if(Settings::Aimbot::Auto::shoot) {
                    AutoShoot(local, weapon, pCmd);
                }
                if(pCmd->buttons & IN_ATTACK) {
                    if(!Settings::Aimbot::Silent::enabled) {
                        pCmd->viewangles = vTo;
                        pEngine->SetViewAngles(pCmd->viewangles);
                    } else {
                        pCmd->viewangles = vTo;
                    }
                }
            }
        }
    }
}

void RecoilControl(C_BaseEntity* local, CUserCmd* cmd) {
    if(!Settings::Aimbot::NoRecoil::enabled)
        return;
    
    Vector punch = local->GetPunchAngles() * 2.f;
    
    if(cmd->buttons & IN_ATTACK) {
        
        cmd->viewangles.x -= punch.x;
        cmd->viewangles.y -= punch.y;
    }
}
