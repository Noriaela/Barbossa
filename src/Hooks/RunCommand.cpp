/*
*
* RunCommand.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

void hkRunCommand(void* thisptr, C_BaseEntity* pLocal, CUserCmd* pCmd, void* pHelper) {
    predVMT->GetOriginalMethod<tRunCommand>(RunCommandIndex)(thisptr, pLocal, pCmd, pHelper);
    pMoveHelper = (IMoveHelper*)pHelper;
}
