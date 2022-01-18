all: mathGen

mathGen: main.o plus.o menu.o
	g++ -o mathGen main.o plus.o menu.o

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

plus.o: plus.cpp plus.h
	g++ -c plus.cpp

main.o: main.cpp
	g++ -c main.cpp