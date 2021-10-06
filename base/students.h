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
		std::string gpa;
		std::string creditHrs;
		Address address;
		Dates dob;
		Dates grad;

	public:
		Student();
		~Students();
		std::string getfName();
		std::string getlName();
		std::string getAddress();
		std::string getDOB();
		std::string getGrad();
		std::string getGPA();
		std::string getCreditHrs();

		void setfName(std::string fName);
		void setlName(std::string lName);
		void setAddress(std::string address);
		void setDOB(Dates dob);
		void setGrad(Dates grad);
		void setGPA(std::string gpa);
		void setCreditHrs(std::string creditHrs);
		
}; //end Student class def

#endif
