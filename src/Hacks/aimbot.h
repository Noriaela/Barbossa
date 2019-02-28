//
//  aimbot.hpp
//  vHook
//
#pragma once

#include "../main.h"

void DoAim(CUserCmd* pCmd, C_BaseEntity* local, C_BaseCombatWeapon* weapon, bool& bSendPacket);
void RecoilControl(C_BaseEntity* local, CUserCmd* cmd);

namespace Aimbot {
    extern C_BaseEntity* curTarget;
}
