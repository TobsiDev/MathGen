#pragma once
#include <string.h>
#include <iostream>
#include <fstream>

// There is 23 lines in the language file + 1 space between the languages. 
//int spaceBetweenLang = 24;

enum LANGUAGE {ENG_US = 0, DAN_DK};

void langChoice();
std::string readLine(int lineNumb);
void readLinesFromTo(int lineStart, int lineEnd);
void printTitle();
void readLangOptions(int lineNumb);
void readLangOptions(int startLine, int endLine);

void setInts(int& i1, int& i2);
void setInt(int& i1);

LANGUAGE langConf();
void testL(int line);