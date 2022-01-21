#pragma once

#include <iostream>
#include <fstream>
#include <cstring>

#include "color.h"

enum options {PLUS = 0, MINUS, MULTI};

bool writeToFile(options cate);
std::string inputFileName();
int inputAmount();