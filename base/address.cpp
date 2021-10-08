#include <iostream>
#include "address.h"

// start Address class def
Address::Address(){
}

Address::~Address(){
}

std::string Address::getLine1()
{
	return line1;
}

std::string Address::getLine2()
{
	return line2;
}

std::string Address::getCity()
{
	return city;
}

std::string Address::getState()
{
	return state;
}

std::string Address::getZip()
{
	return zip;
}

std::string Address::getAdd()
{
	return address;
}

void Address::setLine1(std::string line1)
{
	Address::line1 = line1;
}

void Address::setLine2(std::string line2)
{
	Address::line2 = line2;
}

void Address::setCity(std::string city)
{
	Address::city = city;
}

void Address::setState(std::string state)
{
	Address::state = state;
}

void Address::setZip(std::string zip)
{
	Address::zip = zip;
}

void Address::setAdd()
{
	Address::address = line1 + ", " + line2 + ", " + city + ", " + state + ", " + zip;
} // end Address class def
