#pragma once

#include "../main.h"

enum ClantagType {
	Default	= 0,
	Hide	= 1,
	Adderall= 2,
	Valve	= 3,
};

void ChangeName(const char* szName);
void Clantag();