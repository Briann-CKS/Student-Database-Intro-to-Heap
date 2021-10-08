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
		std::string FullAddress;
		std::string FullDOB;
		std::string FullGrad;

	public:
		Students();
		Students(std::string str);
		~Students();
		std::string getfName();
		std::string getlName();
		std::string getGPA();
		std::string getCreditHrs();
		std::string getFullAddress();
		std::string getFullDOB();
		std::string getFullGrad();

		void setfName(std::string fName);
		void setlName(std::string lName);
		void setGPA(std::string gpa);
		void setCreditHrs(std::string creditHrs);
		
		void setLine (std::string line);
		void setFullAddress(Address* address);
		void setFullDOB(Dates* date);
		void setFullGrad(Dates* date);

}; //end Student class def

#endif
