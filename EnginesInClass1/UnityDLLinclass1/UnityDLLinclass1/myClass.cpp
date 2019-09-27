#include "myClass.h"
//code is referenced from the Tutorial 3 example project we were shown during the lab 

int MyClass::doSomething()
{
	return 1;
}

void MyClass::savePos(float x, float y, float z)
{
	//std::string out = file; 

	////std::ofstream txtFile(out, std::ios::out, std::ios::binary);
	//std::ofstream myFile("assignment.txt");
	//if (myFile.is_open())
	//{
	//	myFile.write(reinterpret_cast<char*>(&posX), sizeof(posX));
	//	myFile.write(reinterpret_cast<char*>(&posY), sizeof(posY));
	//	myFile.write(reinterpret_cast<char*>(&posZ), sizeof(posZ));

	//	myFile.close(); 
	//}

	std::ofstream myFile("assignment.txt");

	if (myFile.is_open())
	{
		//should write the position on each axis on a seperate line
		myFile << x << "\n";
		myFile << y << "\n";
		myFile << z << "\n";
		myFile.close();
	}
	//else cout << "Unable to open file";;


}

void MyClass::loadPos(float x, float y, float z)
{
	/*std::string out = file;

	std::ifstream myFile("assignment.txt");
	if (myFile.is_open())
	{
		myFile.read(reinterpret_cast<char*>(&posX), sizeof(posX));
		myFile.read(reinterpret_cast<char*>(&posY), sizeof(posY));
		myFile.read(reinterpret_cast<char*>(&posZ), sizeof(posZ));

		myFile.close(); 
	}*/

	std::string line;
	std::ifstream myFile("assignment.txt");
	if (myFile.is_open())
	{
		while (getline(myFile, line)); 
		{
			std::cout << line << '\n';
		}
		myFile.close();
	}
}
