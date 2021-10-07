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
	std::ofstream fullFile;
	std::ofstream shortFile;
	std::ofstream alphaFile;
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
		for(counter = 0; counter < 50; counter++)
		{
			getline(inFile, fileLine);
			student[counter].set(fileLine);
		}

		for(counter=0; counter<50; counter++)
		{
			fullFile.open





			ss.clear();
			ss.str("");
			ss.str(fileLine);
			




			getline(ss, token, ',')
			{
				converter.clear();
				converter.str("");					
				converter.str(token);
				converter>> str;	
			}
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
