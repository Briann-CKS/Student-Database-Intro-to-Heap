// students.cpp

#include <iostream>
#include <string>
#include "address.h"
#include "dates.h"

Students::Students(){
}

Students::~Students(){
}

std::string Students::getfName()
{
	return fName;
}

std::string Students::getlName()
{
	return lName;
}

std::string Students::getAddress()
{
	return address;
}

std::string Students::getDOB()
{
	return dob;
}

std::string Students::getGrad()
{
	return grad;

std::string Students::getGPA()
{
	return GPA;
}

std::string Students::getCreditHrs()
{
	return creditHrs;
}

void Students::setfName(std::string fName)
{
	Students::fName = fName;
}

void Students::setlName(std::string lName)
{
	Students::lName = lName;
}

void Students::setAddress(std::string address)
{
	Student::Address->address = address;
}

void Students::setDOB(std::string dob)
{
	Students::dob = dob;
}

void Students::setGrad(std::string grad)
{
	Students::grad = grad;
}

void Students::setGPA (std::string gpa)
{
	Students::gpa = gpa;
}

void Students::setCreditHrs(std::string creditHrs)
{
	Students::creditHrs = creditHrs;
} 	 
