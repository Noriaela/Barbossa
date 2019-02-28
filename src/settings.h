/*
*
* Settings.h
*  Created by Warlauke#6660
*/
#pragma once

namespace UI {
	// Menu Check
    extern bool isVisible;
        
    extern bool MainWindow;
    extern bool ColWindow;
	extern bool SpecWindow;
	extern bool ConfigWindow;
	extern bool PlayerWindow;
}

namespace ComboBox 
{
	namespace Health 
	{
		extern bool opend;
	}
}

namespace Settings
{

	namespace AntiUntrust 
	{
		extern bool enabled;
	}

	namespace Aimbot 
	{
		extern bool enabled;
		extern int fov;

		namespace Silent
		{
			extern bool enabled;
		}

		namespace Hitscan 
		{
			extern bool enabled;
			extern int type;
		}

		namespace Prediction
		{
			extern bool enabled;
		}

		namespace AutoWall
		{
			extern bool enabled;
			extern int mindmg;
		}

		namespace Auto
		{
			extern bool shoot;
			extern bool scope;
			extern bool pistol;
			extern bool stop;
		}

		namespace TriggerBot 
		{
			extern bool enabled;
			extern ButtonCode_t key;
		}

		namespace NoRecoil 
		{
			extern bool enabled;
		}

	// Aimbot End
	}

	namespace ESP
	{
		extern bool enabled;

		namespace Box 
		{
			extern bool enabled;

			namespace Counter_Terrorist {
				extern Color col;
				extern Color col_ign;
			}
			namespace Terrorist {
				extern Color col;
				extern Color col_ign;
			}
		}

		namespace Snaplines 
		{
			extern bool enabled;
			// Might have seperate snapline colors here sometime
		}

		namespace Skeleton 
		{
			extern bool enabled;
		}

		namespace Filters 
		{
			extern bool enemy_only;
			extern bool visual_only;
		}

		namespace Info
		{
			extern bool name;
			extern bool clan;
			extern bool scoped;
			extern bool planting;
			extern bool defusing;
			extern bool grabbingHostage;
			extern bool rescuing;

			namespace Health 
			{
				extern bool enabled;
				extern int type;
				extern bool opend;
			}
		}

		namespace Chams
		{
			extern bool enabled;
			extern int type;

			namespace Counter_Terrorist {
				extern Color col;
				extern Color col_ign;
			}
			namespace Terrorist {
				extern Color col;
				extern Color col_ign;
			}
			
			namespace Arms
			{
				extern bool enabled;
				extern Color col;
				extern int type;
			}

			namespace Weapons
			{
				extern bool enabled;
				extern Color col;
				extern int type;
			}
		}
	// ESP End
	}
    
    namespace NoScope
    {
        extern bool enabled;
    }
    
    namespace ScreenshotCleaner
    {
        extern bool enabled;
    }

    namespace BHop 
    {
    	extern bool enabled;

    	namespace AutoStrafe
    	{
    		extern bool enabled;
    	}
    }

    namespace Clantag
    {
    	extern bool enabled;
    	extern int type;
    }

    namespace Spammer
    {
    	extern bool enabled;
    }

    namespace ShowSpectators
    {
    	extern bool enabled;
    }

    namespace FOVChanger
    {
        extern bool enabled;
        extern bool viewmodelEnabled;
        extern float value;
        extern float viewmodelValue;
        extern bool ignoreScope;
    }
}	
