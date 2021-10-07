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
		std::string address;
		std::string dob;
		std::string grad;
		std::string gpa;
		std::string creditHrs;

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
		void setDOB(std::string dob);
		void setGrad(std::string grad);
		void setGPA(std::string gpa);
		void setCreditHrs(std::string creditHrs);
		
}; //end Student class def

#endif
