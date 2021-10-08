#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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
	std::stringstream converter;

	Students* student = new Students[50];

	//Open input file
	inFile.open ("students.dat");
	if (inFile.is_open())
	{
		for(counter = 0; counter < 50; counter++)
		{
			getline(inFile, fileLine);
			student[counter].setLine(fileLine);
		}

		fullFile.open("fullReport.txt");
		if (fullFile.is_open())
		{
			for (counter = 0; counter<50; counter++)
			{
				text = "Last Name: " + student[counter].getlName() + "\n";
				text += "First Name: " + student[counter].getfName() + "\n";
				text += "Address: " + student[counter].getAddress() + "\n";
				text += "Birthday: " + student[counter].getDOB() + "\n";
				text += "Graduation: " + student[counter].getGrad() + "\n";
				text += "GPA: " + student[counter].getGPA() + "\n";
				text += "Credit Hours: " + student[counter].getCreditHrs() + "\n\n\n";
								
				converter.clear();			
				converter.str("");
				converter.str(text);
				fullFile << converter.str();
			}
			
			
			/*for (counter = 0; counter<50; counter++)
			{
				text = student[counter]			
				
				
				fullFile << student[counter] << std::endl;
			}*/
		}
		else
		{
			std::cout << "Unable to open fullReport.txt" << std::endl;
	        }

		/*shortFile.open("shortReport.txt");
                if (shortFile.is_open())
                {
                        for (counter = 0; counter<50; counter++)
                        {
                                shortFile << student[counter].getfName() << " ";
				shortFile << student[counter].getlName() << std::endl;
                        }       
                }       
                else    
                {
                        std::cout << "Unable to open shortReport.txt" << std::endl;
                } */      

		/*alphaFile.open("alphaReport.txt");
                if (alphaFile.is_open())
                {
                        for (counter = 0; counter<50; counter++)
                        {
                                alphaReport << student[counter] << std::endl;
                        }       
                }       
                else    
                {
                        std::cout << "Unable to open file" << std::endl;
                }*/   
	}    
	else
	{
		std::cout << "Unable to students.dat" << std::endl;
	}

	fullFile.close();
	//shortFile.close();
	//alphaFile.close();

	delete[] student;
	return 0;

}
