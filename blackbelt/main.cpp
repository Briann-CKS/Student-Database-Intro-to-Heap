// main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string.h>
#include "students.h"
#include "address.h"
#include "dates.h"

void sortName (std::string strArr[]);

int main ()
{
	int counter = 0;
	std::ifstream inFile;
	std::ofstream fullFile;
	std::ofstream shortFile;
	std::ofstream alphaFile;
	std::string fileLine;	
	std::string text;
	std::string stext;
	std::string alphatext;
	std::stringstream converter;
	std::stringstream ss;
	std::stringstream alpha;
	bool keep_going = true;
	int choice;

	Students* student = new Students[50];

	std::cout << "Here are some options for you. Which file would you like to create?" << std::endl;
	

	while (keep_going)
	{
		std::cout << "1)   Full Report \n" << "2)   Short Report \n" << "3)   Alphabet Report \n" << "4)   Exit " << std::endl;
		std::cin >> choice;
		if (choice > 0 && choice < 5)
		{
			// Open input file
			inFile.open ("students.dat");
			if (inFile.is_open())
			{
				for(counter = 0; counter < 50; counter++)
				{
					getline(inFile, fileLine);
					student[counter].setLine(fileLine);
				}

				if (choice == 1)
				{
					fullFile.open("fullReport.txt");
					if (fullFile.is_open())
					{
						for (counter = 0; counter<50; counter++)
						{
							text = "Last Name: " + student[counter].getlName() + "\n";
							text += "First Name: " + student[counter].getfName() + "\n";
							text += "Address: " + student[counter].getFullAddress() + "\n";
							text += "Birthday: " + student[counter].getFullDOB() + "\n";
							text += "Graduation: " + student[counter].getFullGrad() + "\n";
							text += "GPA: " + student[counter].getGPA() + "\n";
							text += "Credit Hours: " + student[counter].getCreditHrs() + "\n\n\n";
									
							converter.clear();			
							converter.str("");
							converter.str(text);
							fullFile << converter.str();
						}
						fullFile.close();
						std::cout << "Full Report done!\n\n" << std::endl;
					}
					else
					{
						std::cout << "Unable to open fullReport.txt" << std::endl;
				        }
		
				}
				
				else if (choice == 2)
				{
					shortFile.open("shortReport.txt");
					if (shortFile.is_open())
                			{
						for (counter = 0; counter<50; counter++)
                  		      		{
							stext = "Last Name: " + student[counter].getlName() + "\n";
                	        	        	stext += "First Name: " + student[counter].getfName() + "\n\n\n";
				
							ss.clear();
							ss.str("");
							ss.str(stext);
							shortFile << ss.str();
						}
						shortFile.close(); 
						std::cout << "Short Report done!\n\n" << std::endl;      
        	       			}      
					else    
        		        	{
                		        	std::cout << "Unable to open shortReport.txt" << std::endl;
	                		} 
				}
     
				else if (choice == 3)	
				{
					std::string strArray [50];
					for(int i = 0; i< 50; i++)
					{
						strArray[i] = student[i].getfName() + " " + student[i].getlName();
					}
		
					sortName (strArray);

					alphaFile.open("alphaReport.txt");
			                if (alphaFile.is_open())
                			{
                        			for (counter = 0; counter<50; counter++)
                        			{
							alphatext = strArray[counter] + "\n\n";
				
                                			alpha.clear();
							alpha.str("");
			                                alpha.str(alphatext);
                        			        alphaFile << alpha.str();
                        			}	
						alphaFile.close();
						std::cout << "Alphabet Report done!\n\n" << std::endl; 	       
                			}       
					else    
			                {
						std::cout << "Unable to alphaReport.txt" << std::endl;
                			}  
				}	
			
				else
				{
					std::cout << "Thank you, and have a great day!" << std::endl;
					keep_going = false;
				} 
			} 
  
			else
			{
				std::cout << "Unable to students.dat" << std::endl;
			}
		}

		else 
		{
			std::cout << "You did not select any of the options above!\n" << std::endl;
			keep_going = false;
		}

		inFile.close();
	}

	delete[] student;
	return 0;
}

void sortName (std::string strArr[])
{
	std::string temp;	
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < (50 - i - 1); j++)
		{
			if (strArr[j] > strArr[j+1])
			{
				temp = strArr[j];
				strArr[j] = strArr[j+1];
				strArr[j+1] = temp;
			}
		}
	}
}
