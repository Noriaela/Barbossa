#include "autoshoot.h"

// -- Settings

// ~~ Auto Settings ~~
bool Settings::Aimbot::Auto::shoot = false;
bool Settings::Aimbot::Auto::scope = false;
bool Settings::Aimbot::Auto::pistol = false;
bool Settings::Aimbot::Auto::stop = false;

// -- Settings

void AutoShoot(C_BaseEntity* player, C_BaseCombatWeapon* activeWeapon, CUserCmd* cmd)
{
    if (!Settings::Aimbot::Auto::shoot)
        return;
    
    if (!player || !activeWeapon || activeWeapon->GetAmmo() == 0)
        return;
    
    CSWeaponType weaponType = (CSWeaponType)activeWeapon->GetCSWpnData()->m_WeaponType;
    if (weaponType == CSWeaponType::WEAPONTYPE_KNIFE || weaponType == CSWeaponType::WEAPONTYPE_C4 || weaponType == CSWeaponType::WEAPONTYPE_GRENADE)
        return;
    
    if (cmd->buttons & IN_USE)
        return;
    
    C_BaseEntity* localplayer = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());
    
    float nextPrimaryAttack = activeWeapon->GetNextPrimaryAttack();
    
    if (nextPrimaryAttack > pGlobals->curtime) {
        if (*activeWeapon->GetItemDefinitionIndex() == ItemDefinitionIndex::WEAPON_REVOLVER)
            cmd->buttons &= ~IN_ATTACK2;
        else
            cmd->buttons &= ~IN_ATTACK;
    } else {
        if (Settings::Aimbot::Auto::scope && activeWeapon->GetCSWpnData()->m_iZoomLevels > 0 && !localplayer->IsScoped())
            cmd->buttons |= IN_ATTACK2;
        else if (*activeWeapon->GetItemDefinitionIndex() == ItemDefinitionIndex::WEAPON_REVOLVER)
            cmd->buttons |= IN_ATTACK2;
        else
            cmd->buttons |= IN_ATTACK;
    }
}

void ContinuousPistols(CUserCmd* cmd, C_BaseCombatWeapon* weapon)
{
    if(!Settings::Aimbot::Auto::pistol)
        return;
    
    if(!weapon->IsPistol())
        return;
    
    if (cmd->buttons & IN_ATTACK) {
        static bool bAttack = false;
        if (bAttack)
            cmd->buttons |= IN_ATTACK;
        else
            cmd->buttons &= ~IN_ATTACK;
        bAttack = !bAttack;
    }
}
