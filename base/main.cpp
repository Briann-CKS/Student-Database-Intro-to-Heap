#include <iostream>
#include <string>
#include <fstream>
#include "students.h"
#include "address.h"
#include "dates.h"

int main ()
{
	int counter = 0;
	std::ifstream inFile;
	std::ofstream outFile;
	std::string fileLine;	
	std::string text;
	std::string token;
	std::string str;

	std::stringstream ss;
	std::stringstream converter;

	Student* student = new Student[50];

	//Open input file
	inFile.open ("students.dat");
	if (inFile.is_open())
	{
		while (getline(inFile, fileLine))
		{
			ss.clear();
			ss.str("");
			ss.str(fileLine);
			while(getline(ss, token, ','))
			{
				converter.clear();
				converter.str("");					
				converter.str(token);
				converter>> str;
				
			}
			counter++;
		}



	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}

	outFile.open("fullReport.txt");
	if (outFile.is_open())
	{
		


	}
	else 
	{
		std::cout << "Unable to open file" << std::endl;
	}


	delete[] students;
	return 0;

}
