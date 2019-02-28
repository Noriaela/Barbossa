/*
*
* OverrideView.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

// Hacks
#include "../Hacks/fovchanger.h"

void hkOverrideView(void* thisptr, CViewSetup& setup) {
    
    if (!Settings::ScreenshotCleaner::enabled || !pEngine->IsTakingScreenshot())
        OverrideView(setup);
    
    createmoveVMT->GetOriginalMethod<tOverrideView>(OverrideViewIndex)(thisptr, setup);
}
