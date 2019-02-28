/*
*
* PaintTraverse.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
#include "../Drawings/menu.h"
#include "../Hacks/esp.h"
#include "../Hacks/spectators.h"
// Index IDs
#include "index.h"


void hkPaintTraverse(void* thisptr, VPANEL panel, bool forceRepaint, bool allowForce) {
    if (Settings::NoScope::enabled && !strcmp("HudZoom", pPanel->GetName(panel)))
        return;
    
    paintVMT->GetOriginalMethod<tPaintTraverse>(PaintTraverseIndex)(thisptr, panel, forceRepaint, allowForce);
    C_BaseEntity* local = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());
    static VPANEL last = 0;

    if(!last) {
        if(strstr(pPanel->GetName(panel), "FocusOverlayPanel")) {
            specfont    = draw->createfont(specfont, "Tahoma", 12, FONTFLAG_OUTLINE);   // Used for spectatorwindow
            mFont       = draw->createfont(mFont, "Tahoma", 14, FONTFLAG_NONE);         // Menu font
            eFont       = draw->createfont(eFont, "Verdana", 12, FONTFLAG_DROPSHADOW);  // ESP font
            sFont       = draw->createfont(sFont, "Verdana", 11, FONTFLAG_OUTLINE);     // Used for sliders
            // fontnamehere    = draw->createfont(samefontnamehere, "FontYouWant", SizeOfFont, FONTFLAG); (Again only for the poeple who want to add/use other fonts and can't figure out simple shit)
            // If you want to use a font change the shit in between "" also make sure its in your font book (For the people that want to use other fonts and can't figure out simple shit)
            last = panel;
        } 
    }

    if(panel == last) {
        if(Settings::ScreenshotCleaner::enabled && pEngine->IsTakingScreenshot())
            return;
        if(Global::localplayer) {
            DrawPlayerESP();    // Player esp            
            Spectatorlist();    // Draws speclist
            DrawScope(local);
        }
    }
}
