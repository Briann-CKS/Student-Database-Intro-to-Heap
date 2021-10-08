// address.cpp
#include <iostream>
#include "address.h"

// start Address class def
Address::Address(){
}

Address::~Address(){
}

// Getter methods def
std::string Address::getLine1()
{
	return line1;
} // end

std::string Address::getLine2()
{
	return line2;
} // end

std::string Address::getCity()
{
	return city;
} // end

std::string Address::getState()
{
	return state;
} // end

std::string Address::getZip()
{
	return zip;
} // end

// Setter methods def
void Address::setLine1(std::string line1)
{
	Address::line1 = line1;
} // end

void Address::setLine2(std::string line2)
{
	Address::line2 = line2;
} // end

void Address::setCity(std::string city)
{
	Address::city = city;
} // end

void Address::setState(std::string state)
{
	Address::state = state;
} // end

void Address::setZip(std::string zip)
{
	Address::zip = zip;
} // end

 // end Address class def
