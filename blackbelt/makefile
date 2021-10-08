HeapStudents: address.o students.o dates.o main.o
	g++ -g address.o students.o dates.o main.o -o HeapStudents

main.o: main.cpp address.h students.h dates.h
	g++ -c main.cpp

address.o: address.h address.cpp
	g++ -c address.cpp

students.o: students.h students.cpp address.h dates.h
	g++ -c students.cpp

dates.o: dates.h dates.cpp
	g++ -c dates.cpp

clean:
	rm -f HeapStudents 
	rm -f *.o
	rm -f *.txt

run: HeapStudents
	./HeapStudents

valgrind: HeapStudents
	valgrind --leak-check=full ./HeapStudents

debug: HeapStudents
	gdb HeapStudents
