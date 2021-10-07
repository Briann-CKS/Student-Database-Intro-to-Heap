// students.h
#ifndef STUDENTS_H_EXISTS
#define STUDENTS_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include "dates.h"
#include "address.h"

//start Student class def
class Students
{
	private:
		std::string fName;
		std::string lName;
		Address* address;
		Dates* dob;
		Dates* grad;
		std::string gpa;
		std::string creditHrs;

	public:
		Students();
		Students(std::string str);
		~Students();
		std::string getfName();
		std::string getlName();
		Address getAddress();
		Dates getDOB();
		Dates getGrad();
		std::string getGPA();
		std::string getCreditHrs();

		void setfName(std::string fName);
		void setlName(std::string lName);
		void setAddress(Address* address);
		void setDOB(Dates* dob);
		void setGrad(Dates* grad);
		void setGPA(std::string gpa);
		void setCreditHrs(std::string creditHrs);
		
		void setLine (std::string line);
		void printFull();
		void printNames();

}; //end Student class def

#endif
