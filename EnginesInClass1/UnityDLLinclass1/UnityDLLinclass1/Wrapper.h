
#pragma once
#include <string.h>
#include "PluginSettings.h"
#include "myClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int doSomething();

	float getPositionX();
	float getPositionY();
	float getPositionZ(); 

	float savePosition(); //lol idk if this can save 3 diff values 





#ifdef __cplusplus
}
#endif