#include <iostream>
#include <string>
#include "address.h"

Address::Address(){
	Address::street = "street";
	Address::city = "city";
	Address::state = "state";
	Address::zip = "zip";

} // end constructor

void Address::init(street, city, state, zip){
	//I don't know
} // end init

void Address::printAddress(){
	std::cout << street << std::endl;
	std::cout << city << ", " << state << ", " << zip << std::endl;
} // end printAddress
