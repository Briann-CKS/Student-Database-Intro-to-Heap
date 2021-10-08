#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

//start Address class def
class Address
{
	private:
		std::string line1;
		std::string line2;
		std::string city;
		std::string state;
		std::string zip;
		std::string address;

	public:
		Address();
		~Address();
		std::string getLine1();
		std::string getLine2();
		std::string getCity();
		std::string getState();
		std::string getZip();
		std::string getAdd();

		void setLine1(std::string line1);
		void setLine2(std::string line2);
		void setCity(std::string city);
		void setState(std::string state);
		void setZip(std::string zip);
		void setAdd();
		
}; //end Address class def

#endif
