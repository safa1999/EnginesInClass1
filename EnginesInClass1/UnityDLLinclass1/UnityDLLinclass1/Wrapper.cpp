#include "Wrapper.h"

MyClass object1; 

int doSomething()
{
	return object1.doSomething();
}

MyClass fileManager;

PLUGIN_API void loadPos(float x, float y, float z)
{
	return fileManager.savePos(x,y,z); 
}

PLUGIN_API void savePos(float x, float y, float z)
{
	return fileManager.loadPos(x, y, z);
}

