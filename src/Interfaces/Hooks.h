/*
*
* Hooks.h
*  Created by Warlauke#6660
*/

#pragma once

extern void InitializeInterfaces(); //  Handles all interfaces
extern void InitializeVMTs();       //  Handles all vmt's
extern void InitializeHooks();      //  Handles all hooks
extern void UpdateResolver();       //
extern void PrintInfo();            //  Prints cheat info
extern void OpenGL_hk();

#define CLIENTMODE_SIG  "\x48\x8B\xB7\x00\x00\x00\x00\x48\x8D\x3D\x00\x00\x00\x00\x5D\xE9"
#define CLIENTMODE_MASK "xxx????xxx????xx"

#define GLOBALS_SIG     "\x48\x8D\x05\x00\x00\x00\x00\x48\x8B\x00\xF3\x0F\x10\x00\x00\xF3\x0F\x11\x83\x00\x00\x00\x00"
#define GLOBALS_MASK    "xxx????xxxxxx??xxxx????"

#define SENDPACKET_SIG  "\x41\xB5\x00\x84\xC0\x74\x11"
#define SENDPACKET_MASK "xx?xxxx"

#define CLANTAG_SIG     "\x48\x8D\x3D\x00\x00\x00\x00\x48\x89\xFE\xE8\x00\x00\x00\x00\xE9\x00\x00\x00\x00"
#define CLANTAG_MASK    "xxx????xxxx????x????"

#define VIEWRENDER_SIG "\xE8\x00\x00\x00\x00\x48\x89\xDF\x48\x89\xC6\x41\xFF\xD7\xE8\x00\x00\x00\x00\x48"
#define VIEWREDNER_MASK "x????xxxxxxxxxx????x"
