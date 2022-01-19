#pragma once

#include <iostream>
#include <fstream>
#include <time.h>
#include <iomanip>
#include <cmath>

std::string sendStr();

void fileLoop(std::ofstream& file, std::ofstream& fileTeacher, int amount, char mathNotation);
int getNumb(/*add 2 ints. A min and a max*/);
int calcRes(int n1, int n2, int r, char MN);
int getWidth(int numb1, int numb2);