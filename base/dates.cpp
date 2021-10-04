//dates.cpp
#include <iostream>
#include "dates.h"

Dates::Dates(){
}

Dates::~Dates(){
}

int Dates::getDay()
{
	return day;
}

int Dates::getMonth()
{
	return month;
}

int Dates::getYear()
{
	return year;
}

void Dates::setDay(int day)
{
	Dates::day = day;
}

void Dates::setMonth(int month)
{
	Dates::month = month;
}

void Dates::setYear(int year)
{
	Dates::year = year;
}

std::string Dates::getDate()
{
	return date;
}

void Dates::setDate(std::string date)
{
	Dates::date = date;
}
