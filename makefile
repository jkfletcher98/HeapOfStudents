address.o: address.h address.cpp
	g++ -c address.cpp

date.o: date.h date.cpp
	g++ -c date.cpp

student.o: student.cpp student.h address.h date.h
	g++ -c student.cpp
