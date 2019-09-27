
#pragma once
#include <string.h>
#include <iostream>
#include <fstream>
#include <istream>
#include "PluginSettings.h"
#include "myClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int doSomething();
	PLUGIN_API void savePos(float x, float y, float z);
	PLUGIN_API void loadPos(float x, float y, float z); 
	PLUGIN_API void setPos(float x, float y, float z); 




	//float posX;
	//float posY;
	//float posZ;

	float savePosition(float posX,float posY,float posZ); 




#ifdef __cplusplus
}
#endif