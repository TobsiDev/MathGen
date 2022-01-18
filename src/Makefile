all: mathGen

mathGen: main.o plus.o
	g++ -o mathGen main.o plus.o

plus.o: plus.cpp plus.h
	g++ -c plus.cpp

main.o: main.cpp
	g++ -c main.cpp