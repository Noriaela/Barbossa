/*
*
* GetViewModelFOV.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

// Hacks
#include "../Hacks/fovchanger.h"


float hkGetViewModelFOV(void* thisptr) {
    float fov = createmoveVMT->GetOriginalMethod<tGetViewModelFOV>(GetViewModelFOVIndex)(thisptr);
    
    if (!Settings::ScreenshotCleaner::enabled || !pEngine->IsTakingScreenshot())
        GetViewModelFOV(fov);
    
    return fov;
}
