//dates.cpp
#include <iostream>
#include "dates.h"

Dates::Dates(){
}

Dates::~Dates(){
}

std::string Dates::getDay()
{
	return day;
}

std::string Dates::getMonth()
{
	return month;
}

std::string Dates::getYear()
{
	return year;
}

void Dates::setDay(std::string day)
{
	Dates::day = day;
}

void Dates::setMonth(std::string month)
{
	Dates::month = month;
}

void Dates::setYear(std::string year)
{
	Dates::year = year;
}
