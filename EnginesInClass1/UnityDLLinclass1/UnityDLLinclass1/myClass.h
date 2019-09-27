#pragma once

#include "PluginSettings.h"
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <sstream>

class PLUGIN_API MyClass
{
public:
	int doSomething(); 

	void savePos(float x, float y, float z);
	void loadPos(float x, float y, float z); 
	//void setPos(float x, float y, float z); 

	//these should be private 
	float posX = 0;
	float posY = 0;
	float posZ = 0;
};