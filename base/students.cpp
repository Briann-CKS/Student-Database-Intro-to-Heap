// students.cpp

#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "dates.h"

Students::Students(){
}

Students::Students(std::string str)
{
	std::stringstream currentLine;	
	Students::address = new Address();
	Students::dob = new Dates();
	Students::grad = new Dates();

	std::string add1;
	std::string add2;
	std::string addCity;
	std::string addState;
	std::string addZip;
	std::string DOB_month;
	std::string DOB_day;
	std::string DOB_year;
	std::string grad_month;
	std::string grad_day;
	std::string grad_year;

	currentLine.clear();
	currentLine.str("");
	currentLine.str(str);	

	getline(currentLine, Students::fName, ',');
	getline(currentLine, Students::lName, ',');
	getline(currentLine, add1, ',');
	getline(currentLine, add2, ',');
	getline(currentLine, addCity, ',');
	getline(currentLine, addState, ',');
	getline(currentLine, addZip, ',');
	getline(currentLine, DOB_month, ',');
	getline(currentLine, DOB_day, ',');
	getline(currentLine, DOB_year, ',');
	getline(currentLine, grad_month, ',');
	getline(currentLine, grad_day, ',');
	getline(currentLine, grad_year, ',');
	getline(currentLine, Students::GPA, ',');
	getline(currentLine, Students::creditHrs);

	Students::address -> setLine1(add1);
	Students::address -> setLine2(add2);
	Students::address -> setCity(addCity);
	Students::address -> setState(addState);
	Students::address -> setZip(addZip);
	Students::address -> setAdd

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
