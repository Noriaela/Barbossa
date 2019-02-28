/*
*
* KeyEvent.cpp
*  Created by Warlauke#6660
*/

#include "../main.h"
// Index IDs
#include "index.h"

bool UI::isVisible = false;

int hkKeyEvent(void* thisptr, int eventcode, int keynum, const char* currentbinding)
{
    if(eventcode == 0) {
        if(keynum == KEY_INSERT || keynum == KEY_LALT)
        {
            UI::isVisible = !UI::isVisible;
        }
    }
    return clientVMT->GetOriginalMethod<tKeyEvent>(KeyEventIndex)(thisptr, eventcode, keynum, currentbinding);
}
