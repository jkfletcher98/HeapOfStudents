#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

class Student {
	private:
		std::string studentString;
		std::string fName;
		std::string lName;
		Address* address;
		Date* birthDate;
		Date* gradDate;
		int credit;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent;
		std::string getLastFirst();
};

#endif
