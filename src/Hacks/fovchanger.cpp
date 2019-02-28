#include "fovchanger.h"

bool Settings::FOVChanger::enabled = false;
bool Settings::FOVChanger::ignoreScope = true;
float Settings::FOVChanger::value = 100.f;

bool Settings::FOVChanger::viewmodelEnabled = false;
float Settings::FOVChanger::viewmodelValue = 90.f;

void OverrideView(CViewSetup& pSetup)
{
	if (!Settings::FOVChanger::enabled && !Settings::FOVChanger::viewmodelEnabled)
		return;

	C_BaseEntity* localplayer = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());
	if (!localplayer)
		return;
    
	if (!localplayer->GetAlive()) {
		if (*localplayer->GetObserverMode() == ObserverMode_t::OBS_MODE_IN_EYE && localplayer->GetObserverTarget())
			localplayer = (C_BaseEntity*)pEntList->GetClientEntityFromHandle(localplayer->GetObserverTarget());
		if (!localplayer)
			return;
	}

	if (Settings::FOVChanger::enabled && (Settings::FOVChanger::ignoreScope ? !localplayer->IsScoped() : true))
        pSetup.fov = Settings::FOVChanger::value;
}

void GetViewModelFOV(float& fov)
{
	if (!Settings::FOVChanger::enabled && !Settings::FOVChanger::viewmodelEnabled)
		return;

	C_BaseEntity* localplayer = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());
	if (!localplayer)
		return;

	if (!localplayer->GetAlive()) {
		if (*localplayer->GetObserverMode() == ObserverMode_t::OBS_MODE_IN_EYE && localplayer->GetObserverTarget())
			localplayer = (C_BasePlayer*)pEntList->GetClientEntityFromHandle(localplayer->GetObserverTarget());
		if (!localplayer)
			return;
	}

	if (Settings::FOVChanger::viewmodelEnabled && (Settings::FOVChanger::ignoreScope ? !localplayer->IsScoped() : true))
		fov = Settings::FOVChanger::viewmodelValue;
}
