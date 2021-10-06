// dates.h
#ifndef DATES_H_EXISTS
#define DATES_H_EXISTS

//include library needed
#include <iostream>

// start Dates class def
class Dates
{
	private:
		int day;
		int month;
		int year;
		std::string date;

	public:
		Dates();
		~Dates();
		int getDay();
		int getMonth();
		int getYear();
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		std::string getDate();
		void setDate(std::string date);
}; // end Dates class def

#endif
