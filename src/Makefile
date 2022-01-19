all: mathGen

mathGen: main.o plus.o menu.o writeToFile.o color.o dbgTime.o
	g++ -o mathGen main.o plus.o menu.o writeToFile.o dbgTime.o

dbgTime.o: dbgTime.cpp dbgTime.h
	g++ -c dbgTime.cpp

writeToFile.o: writeToFile.cpp writeToFile.h
	g++ -c writeToFile.cpp

color.o: color.h
	g++ -c color.h

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

plus.o: plus.cpp plus.h
	g++ -c plus.cpp

main.o: main.cpp
	g++ -c main.cpp