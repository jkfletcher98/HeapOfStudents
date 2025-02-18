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
		street gets "street"
		city gets "city"
		state gets "state"
		zip gets "zip"
	void init(street, city, state, zip)
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
		month gets 0
		int day gets 0
		year gets 0
	void init Date(dateString)
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
	void init(studentString)
	void printStudent()
	string getLastFirst()
	~Student()
```
