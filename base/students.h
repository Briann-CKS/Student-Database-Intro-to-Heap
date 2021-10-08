// students.h
#ifndef STUDENTS_H_EXISTS
#define STUDENTS_H_EXISTS

// Include all the libraries and files needed
#include <iostream>
#include <string>
#include <fstream>
#include "dates.h"
#include "address.h"

// Start Student class def
class Students
{
	private:
		std::string fName; // First Name
		std::string lName; // Last Name
		Address* address; // An Address pointer to point to the data on heap
		Dates* dob; // A Dates pointer to point to the data on heap
		Dates* grad; // A Dates pointer to point to the data on heap
		std::string gpa; // GPA
		std::string creditHrs; // Credit Hours completed
		std::string FullAddress; // Full address string
		std::string FullDOB; // Full DOB string
		std::string FullGrad; // Full Graduation date string

	public:
		Students(); // Constructor
		Students(std::string str); // Constructor with parameter
		~Students(); // Destructor
		
		// Getter methods
		std::string getfName();
		std::string getlName();
		std::string getGPA();
		std::string getCreditHrs();
		std::string getFullAddress();
		std::string getFullDOB();
		std::string getFullGrad();

		// Setter methods
		void setfName(std::string fName);
		void setlName(std::string lName);
		void setGPA(std::string gpa);
		void setCreditHrs(std::string creditHrs);
		void setLine (std::string line); // SetLine() method
		void setFullAddress(Address* address);
		void setFullDOB(Dates* date);
		void setFullGrad(Dates* date);

}; //end Student class def

#endif
