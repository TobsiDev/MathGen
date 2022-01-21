#pragma once

#include <iostream>
#include <fstream>
#include <time.h>
#include <iomanip>
#include <cmath>

std::string sendStr();

void fileLoop(std::ofstream& file, std::ofstream& fileTeacher, int amount, char mathNotation, bool useScienceNotations);
double getNumb(/*add 2 ints. A min and a max*/);
double calcRes(int n1, int n2, int r, char MN);
int getWidth(int numb1, int numb2);
void writeNormal(std::ofstream& file, std::ofstream& fileTeacher, int& amount, char& mathNotation);
void writeSci(std::ofstream& file, std::ofstream& fileTeacher, int& amount, char& mathNotation);