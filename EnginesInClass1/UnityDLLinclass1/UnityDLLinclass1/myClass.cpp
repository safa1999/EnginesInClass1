#include "myClass.h"

int MyClass::doSomething()
{
	return 1;
}

//Referenced some code from http://www.cplusplus.com/reference/fstream/ofstream/open/
void MyClass::savePos(float x, float y, float z)
{


	std::ofstream myFile("assignment.txt");
	if (myFile.is_open())
	{
		//is taking each parameter and writing on its own seperate line 
		myFile << x << "\n";
		myFile << y << "\n";
		myFile << z << "\n";
		myFile.close();
	}


}

//Referenced some code from https://stackoverflow.com/questions/19102640/c-read-float-values-from-txt-and-put-them-into-an-unknown-size-2d-array

void MyClass::loadPos(float x, float y, float z)
{

	std::vector<float> v;
	std::string line;
	std::ifstream myFile("assignment.txt");

	if (myFile.is_open())
	{
		//takes first line
		float temp;
		getline(myFile, line);
		//std::cout << line << "\n";
		std::stringstream ss(line);
		ss >> x;
		v.push_back(temp);
		getline(myFile, line);
		//std::cout << line << "\n";
		std::stringstream ss1(line);
		ss1 >> y;
		v.push_back(temp);
		getline(myFile, line);
		//std::cout << line << "\n";
		std::stringstream ss2(line);
		ss2 >> z;
		v.push_back(temp);
	}
	myFile.close();
}
