// dates.h
#ifndef DATES_H_EXISTS
#define DATES_H_EXISTS

//include library needed
#include <iostream>

// start Dates class def
class Dates
{
	private:
		std::string day;
		std::string month;
		std::string year;

	public:
		Dates();
		~Dates();
		std::string getDay();
		std::string getMonth();
		std::string getYear();
		void setDay(std::string day);
		void setMonth(std::string month);
		void setYear(std::string year);

}; // end Dates class def

#endif
