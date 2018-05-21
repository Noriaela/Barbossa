#include "clantag.h"

void clantag() {
    if(!vars.misc.clantag)
        return;

    static int Tick;
    Tick++;
    
    if (Tick > 0 && Tick < 15) {
        SetClanTag("            B", "Barbossa");
    } else if (Tick > 30 && Tick < 45) {
        SetClanTag("           Ba", "Barbossa");
    } else if (Tick > 60 && Tick < 75) {
        SetClanTag("          Bar", "Barbossa");
    } else if (Tick > 90 && Tick < 105) {
        SetClanTag("         Barb", "Barbossa");
    } else if (Tick > 120 && Tick < 135) {
        SetClanTag("        Barbo", "Barbossa");
    } else if (Tick > 150 && Tick < 165) {
        SetClanTag("       Barbos", "Barbossa");
    } else if (Tick > 180 && Tick < 195) {
        SetClanTag("      Barobss", "Barbossa");
    } else if  (Tick > 210 && Tick < 225) {
        SetClanTag("     Barbossa", "Barbossa");
    } else if (Tick > 240 && Tick < 255) {
        SetClanTag("    Barbossa ", "Barbossa");
    } else if (Tick > 270 && Tick < 285) { 
        SetClanTag("   Barbossa  ", "Barbossa");
    } else if (Tick > 300 && Tick < 315) {
        SetClanTag("  Barbossa   ", "Barbossa");
    } else if (Tick > 330 && Tick < 345) {
        SetClanTag(" Barbossa    ", "Barbossa");
    } else if (Tick > 360 && Tick < 375) {
        SetClanTag("Barbossa     ", "Barbossa");
    } else if (Tick > 390 && Tick < 405) {
        SetClanTag("arbossa      ", "Barbossa");
    } else if (Tick > 420 && Tick < 435) {
        SetClanTag("rbossa       ", "Barbossa");
    } else if (Tick > 450 && Tick < 465) {
        SetClanTag("bossa        ", "Barbossa");
    } else if (Tick > 480 && Tick< 495) {
        SetClanTag("ossa         ", "Barbossa");
    } else if (Tick > 510 && Tick < 525) {
        SetClanTag("ssa          ", "Barbossa");
    } else if (Tick > 540 && Tick < 555) {
        SetClanTag("sa           ", "Barbossa");
    } else if (Tick > 570 && Tick < 585) {
        SetClanTag("a            ", "Barbossa");
    } else if (Tick > 600 && Tick < 615) {
        SetClanTag("             ", "Barbossa");
    }
    if(Tick > 615) {
        Tick = 0;
    }    
}