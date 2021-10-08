// address.h
#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

// Include all the libraries needed
#include <iostream>
#include <string>

//start Address class def
class Address
{
	private:
		// String attributes for each component of the address
		std::string line1;
		std::string line2;
		std::string city;
		std::string state;
		std::string zip;

	public:
		Address(); // Constructor
		~Address(); // Destructor

		// Getter methods
		std::string getLine1();
		std::string getLine2();
		std::string getCity();
		std::string getState();
		std::string getZip();

		// Setter methods
		void setLine1(std::string line1);
		void setLine2(std::string line2);
		void setCity(std::string city);
		void setState(std::string state);
		void setZip(std::string zip);
		
}; //end Address class def

#endif
