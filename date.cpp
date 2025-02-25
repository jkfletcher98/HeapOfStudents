#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
	std::string dateString = "00/00/0000";
	int month = 0;
	int day = 0;
	int year = 0;
} // end constructor

void Date::init(std::string dateString){
	Date::dateString = dateString;
	std::stringstream ss;
	std::string tDay;
	std::string tMonth;
	std::string tYear;

	ss.clear();
	ss.str("");

	ss.str(dateString);
	getline(ss, tMonth, '/');
	getline(ss, tDay, '/');
	getline(ss, tYear);

	ss.clear();
	ss.str("");

	ss << tDay << " " << tMonth << " " << tYear;
	ss >> Date::day >> Date::month >> Date::year;

} //end init

void Date::printDate(){
	std::string monthNames[] = {"", "January", "February", "March", "April", 
		"May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << monthNames[Date::month]  << " " << Date::day << ", " << Date::year << std::endl;
} // end printDate
