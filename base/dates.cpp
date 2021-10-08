//dates.cpp
#include <iostream>
#include "dates.h"

Dates::Dates(){
}

Dates::~Dates(){
}

// getDay() def
std::string Dates::getDay()
{
	return day;
} // end getDay() 

// getMonth() def
std::string Dates::getMonth()
{
	return month;
} // end getMonth()

// getYear() def
std::string Dates::getYear()
{
	return year;
} // end getYear()

// setDay() def
void Dates::setDay(std::string day)
{
	Dates::day = day;
} // end setDay()

// setMonth() def
void Dates::setMonth(std::string month)
{
	Dates::month = month;
} // end setMonth()

// setYear() def
void Dates::setYear(std::string year)
{
	Dates::year = year;
} // end setYear()
