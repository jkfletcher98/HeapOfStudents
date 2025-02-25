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
	Date* birthDate = "00/00/0000";
	Date* gradDate = "00/00/0000";

	int credit = 0;
} // end constructor

void Student::init(std::string studentString){
	Student::studentString = studenString;
	std::stringstream ss;

	std::string tFirst;
	std::string tLast;
	std::string tStreet;
	std::string tCity;
	std::string tState;
	std::string tZip;
	std::string tDateString1;
	std::string tDateString2;
	int tCredit;

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

	ss << tFirst << " " << tLast << " " << 
		tStreet << " " << tCity << " " << tState << " " << tZip << " " << 
		tDateString1 << " " << tDateString2 << " " << 
		tCredit;
	ss >> Student::fName >> Student::lName >>
		Address::street >> Address::city >> Address::state >> Address::zip >>
		birthDate::dateString >> gradDate::dateString >>
		Student::credit;

} // end init

void Student::printStudent(){

} // end printStudent
