#pragma once
#include <string.h>
#include <iostream>
#include <fstream>

// There is 21 lines in the language file + 1 space between the languages. 22 
//int spaceBetweenLang = 22;

enum LANGUAGE {ENG_US = 0, DAN_DK, ENDLANG};

int langChoice();
std::string readLine(int lineNumb, LANGUAGE language);
void readLinesFromTo(int lineStart, int lineEnd, LANGUAGE language);
void printTitle();
void readLangOptions(int lineNumb);