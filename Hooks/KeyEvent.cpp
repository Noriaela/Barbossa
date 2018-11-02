#include "../main.h"
// Index IDs
#include "index.h"

int hkKeyEvent(void* thisptr, int eventcode, int keynum, const char* currentbinding)
{
    if(eventcode == 0)   // Key pressed
    {
        if(keynum == KEY_INSERT || keynum == KEY_LALT)
        {
            vars.menu = !vars.menu; // Fix the cursour issue yourselves its not hard
        }
        
    }
    
    return clientVMT->GetOriginalMethod<tKeyEvent>(KeyEventIndex)(thisptr, eventcode, keynum, currentbinding);
}




