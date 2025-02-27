#include <iostream>
#include <string>
#include <sstream>

#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
	std::string studentString = "fName,lName,street,city,state,zip,birthDate,gradDate,credit";
	std::string fName = "";
	std::string lName = "";

	Address* address;
	Date* birthDate;
	Date* gradDate;

	int credit = 0;
} // end constructor

Student::~Student(){
	delete address;
	delete birthDate;
	delete gradDate;
} // end destructor

void Student::init(std::string studentString){
	Student::studentString = studentString;
	std::stringstream ss;

	std::string tFirst;
	std::string tLast;
	std::string tStreet;
	std::string tCity;
	std::string tState;
	std::string tZip;
	std::string tDateString1;
	std::string tDateString2;
	std::string  tCredit;

	ss.clear();
	ss.str("");

	ss.str(studentString);
	getline(ss, tFirst, ',');
	getline(ss, tLast, ',');
	getline(ss, tStreet, ',');
	getline(ss, tCity, ',');
	getline(ss, tState, ',');
	getline(ss, tZip, ',');
	getline(ss, tDateString1, ',');
	getline(ss, tDateString2, ',');
	getline(ss, tCredit);

	ss.clear();
	ss.str("");

	Student::lName = tLast;
	Student::fName = tFirst;
	Student::address->init(tStreet, tCity, tState, tZip);
	Student::birthDate->init(tDateString1);
	Student::gradDate->init(tDateString2);

	ss << tCredit;
	ss >> Student::credit;

} // end init

void Student::printStudent(){
	std::cout << Student::fName << " " << Student::lName << std::endl;
	address->printAddress();
	birthDate->printDate();
	gradDate->printDate();
	std::cout << "Credits: " << Student::credit << std::endl;

} // end printStudent

