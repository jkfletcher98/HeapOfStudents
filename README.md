# HeapOfStudents
Create a database to manage student information.

Part 1: Get Address and Date working

## Address
```
private:
	string street
	string city
	string state
	string zip
public:
	Address()
		street gets "street"
		city gets "city"
		state gets "state"
		zip gets "zip"
	void init(street, city, state, zip)
		assign variables
	void printAddress()
		first line: street
		second line: city, state, zip
```

## Date
```
private:
	string dateString
	int month
	int day
	int year
public:
	Date()
		dateString gets "00/00/0000"
		month gets 0
		int day gets 0
		year gets 0
	void init Date(dateString)
		assign variables to constructor variables
		month gets information from dateString up to first /
		day gets info from first / to second /
		year gets info from second / to end of string
	void printDate()
		create array of month names - set 0 index to null
		string month gets monthNames[month]
		print month day, year
```

## Student
```
private:
	string studentString
	string fName
	string lName
	Address* address
	Date* birthDate
	Date* gradDate
	int credit
public:
	Student()
		initialize data
	void init(studentString)
		create temporary variables
		set studentString to a stringstream
		separate ss by commas and assign values to temporary varibles
		push temporary varibles out to the correct variable
	void printStudent()
		print first name and last name
		use printAddress
		use printDate for birth date
		use printDate for grad date
		print "Credits: credit"
	string getLastFirst()
		print last name and first name
	~Student()
```
