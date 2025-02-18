# HeapOfStudent
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
	void init(street, city, state, zip)
	void printAddress()
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
	void init Date(dateString)
	void printDate()
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
	void init(studentString)
	void printStudent()
	string getLastFirst()
	~Student()
```
