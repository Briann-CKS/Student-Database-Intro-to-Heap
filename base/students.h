// students.h
#ifndef STUDENTS_H_EXISTS
#define STUDENTS_H_EXISTS

#include <iostream>
#include <string>
#include "dates.h"
#include "address.h"

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
		Students();
		~Students();
		

};

#endif
