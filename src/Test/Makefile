all: fileMan
fileMan: main.o fileMan.o
	g++ -o fileMan main.o fileMan.o

color.o: color.h
	g++ -c color.h

fileMan.o: fileMan.cpp fileMan.h
	g++ -c fileMan.cpp

main.o: main.cpp
	g++ -c main.cpp