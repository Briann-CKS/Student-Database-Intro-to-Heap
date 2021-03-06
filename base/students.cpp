// students.cpp

#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "dates.h"
#include "students.h"

Students::Students()
{
	Students::fName = "";
	Students::lName = "";
	Students::address = new Address();
	Students::dob = new Dates();
	Students::grad = new Dates();
	Students::gpa = "0";
	Students::creditHrs = "0";
}

Students::Students(std::string line)
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
	currentLine.str(line);	

	getline(currentLine, Students::lName, ',');
	getline(currentLine, Students::fName, ',');
	getline(currentLine, add1, ',');
	getline(currentLine, add2, ',');
	getline(currentLine, addCity, ',');
	getline(currentLine, addState, ',');
	getline(currentLine, addZip, ',');
	getline(currentLine, DOB_month, '/');
	getline(currentLine, DOB_day, '/');
	getline(currentLine, DOB_year, ',');
	getline(currentLine, grad_month, '/');
	getline(currentLine, grad_day, '/');
	getline(currentLine, grad_year, ',');
	getline(currentLine, Students::gpa, ',');
	getline(currentLine, Students::creditHrs);
	
	Students::address -> setLine1(add1);
	Students::address -> setLine2(add2);
	Students::address -> setCity(addCity);
	Students::address -> setState(addState);
	Students::address -> setZip(addZip);
	Students::dob -> setMonth(DOB_month);
	Students::dob -> setDay(DOB_day);
	Students::dob -> setYear(DOB_year);
	Students::grad -> setMonth(grad_month);
	Students::grad -> setDay(grad_day);
	Students::grad -> setYear(grad_year);

	Students::setFullAddress(address);
        Students::setFullDOB(dob);
        Students::setFullGrad(grad);
}

Students::~Students()
{
	delete address;
	delete dob;
	delete grad;
}

std::string Students::getfName()
{
	return fName;
}

std::string Students::getlName()
{
	return lName;
}

std::string Students::getGPA()
{
	return gpa;
}

std::string Students::getCreditHrs()
{
	return creditHrs;
}

std::string Students::getFullAddress()
{
	return FullAddress;
}

std::string Students::getFullDOB()
{
        return FullDOB;
}

std::string Students::getFullGrad()
{
        return FullGrad;
}

void Students::setfName(std::string fName)
{
	Students::fName = fName;
}

void Students::setlName(std::string lName)
{
	Students::lName = lName;
}

void Students::setGPA (std::string gpa)
{
	Students::gpa = gpa;
}

void Students::setCreditHrs(std::string creditHrs)
{
	Students::creditHrs = creditHrs;
}

void Students::setLine(std::string line)
{
	std::stringstream currentLine;
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
        currentLine.str(line);

        getline(currentLine, Students::lName, ',');
        getline(currentLine, Students::fName, ',');
        getline(currentLine, add1, ',');
        getline(currentLine, add2, ',');
        getline(currentLine, addCity, ',');
        getline(currentLine, addState, ',');
        getline(currentLine, addZip, ',');
        getline(currentLine, DOB_month, '/');
        getline(currentLine, DOB_day, '/');
        getline(currentLine, DOB_year, ',');
        getline(currentLine, grad_month, '/');
        getline(currentLine, grad_day, '/');
        getline(currentLine, grad_year, ',');
        getline(currentLine, Students::gpa, ',');
        getline(currentLine, Students::creditHrs);

        Students::address -> setLine1(add1);
        Students::address -> setLine2(add2);
        Students::address -> setCity(addCity);
        Students::address -> setState(addState);
        Students::address -> setZip(addZip);
        Students::dob -> setMonth(DOB_month);
        Students::dob -> setDay(DOB_day);
        Students::dob -> setYear(DOB_year);
        Students::grad -> setMonth(grad_month);
        Students::grad -> setDay(grad_day);
        Students::grad -> setYear(grad_year);
	
	Students::setFullAddress(address);
	Students::setFullDOB(dob);
	Students::setFullGrad(grad);
}

void Students::setFullAddress(Address* address)
{
	Students::FullAddress = address -> getLine1() + ", " + address -> getLine2() + ", " + address -> getCity() + ", " + address -> getState() + ", " + address -> getZip();
}

void Students::setFullDOB (Dates* date)
{
	Students::FullDOB = date -> getMonth() + "/" + date -> getDay() + "/" + date -> getYear();
}

void Students::setFullGrad(Dates* date)
{
	Students::FullGrad = date -> getMonth() + "/" + date -> getDay() + "/" + date -> getYear();
}	 
