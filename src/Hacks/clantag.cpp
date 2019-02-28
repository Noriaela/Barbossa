#include "clantag.h"

// -- Settings

bool Settings::Clantag::enabled = false;
int Settings::Clantag::type = 0;

// -- Settings

void ChangeName(const char* szName) {
    ConVar* cvar_name = pCvar->FindVar("name");
    *(int*)((uintptr_t)&cvar_name->fnChangeCallback + 0x15) = 0;
    cvar_name->SetValue(szName);
}

void Clantag() {
    ClantagType tag = (ClantagType)Settings::Clantag::type;
    if(!Settings::Clantag::enabled)
        return;

    switch(tag) {
        case ClantagType::Default: // No Tag
        SetClanTag("\n", "");
        break;
        case ClantagType::Hide: // Hides Name
        SetClanTag("\n\xAD\xAD\xAD", "");
        break;
        case ClantagType::Adderall: // My Tag
        SetClanTag("[Adderall]", "Adderall");
        break;
        case ClantagType::Valve: // Valve Tag
        SetClanTag("[VALV\xE1\xB4\xB1]", "Valve");
        break;
    }
}
