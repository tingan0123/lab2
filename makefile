system:system.o main.o
	g++ -o system main.o system.o

system.o:system.cpp system.h
	g++ -c system.cpp

main: main.cpp system.h
	g++ -c main.cpp


