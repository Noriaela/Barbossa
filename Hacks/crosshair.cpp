#include "crosshair.h"

// Thanks @pwned
// Draw crosshair functions here

void rCrosshair(C_BaseEntity* local)
{
    if(!vars.visuals.rcrosshair)
        return;
    
    if(!pEngine->IsInGame())
        return;
    
    if(!local)
        return;
    
    static int Height, Width;
    pEngine->GetScreenSize(Width, Height);
    
    int x = Width / 2;
    int y = Height / 2;
    
    Vector punchAngles = local->GetPunchAngles();
    
    int dy = Height / 90;
    int dx = Width / 90;
    int X = x - (dx * punchAngles.y);
    int Y = y + (dy * punchAngles.x);
    
    draw->drawCrosshair(X, Y, Color::White());
}