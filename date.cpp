#include <iostream>
#include <string>
#include <sstream>

Date::Date(){
	std::string dateString = "00/00/0000";
	int month = 0;
	int day = 0;
	int year = 0;
} // end constructor

void Date::init(std::string dateString){
	Date::dateString = dateString;
	Date::month = month;
	Date::day = day;
	Date::year = year;

	ss.clear();
	ss.str("");

} //end init

void printDate(){
	monthNames[] = {null, January, February, March, April, May, June, July, August, September, October, November, December};
	std::cout << monthNames[month]  << " " << day << ", " << year<< std::endl;
} // end printDate
