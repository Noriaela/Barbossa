#include "../main.h"
// Index IDs
#include "index.h"


void hkOverrideView(void* thisptr, CViewSetup& setup)  {
    auto* local = pEntList->GetClientEntity(pEngine->GetLocalPlayer());
    
    if(vars.misc.fovt && vars.misc.fov > 0) {
        if(local && !local->IsScoped()) {
            setup.fov += vars.misc.fov;
        }
    }
    
    createmoveVMT->GetOriginalMethod<tOverrideView>(OverrideViewIndex)(thisptr, setup);
}
