heapOfStudents: student.o address.o date.o main.o
	g++ -g student.o address.o date.o main.o -o heapOfStudents

main.o: student.h address.h date.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

student.o: student.cpp student.h address.h date.h
	g++ -c -g student.cpp

clean:
	rm *.o
	rm heapOfStudents

run: heapOfStudents
	./heapOfStudents

debug: heapOfStudents
	gdb heapOfStudents
