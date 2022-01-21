#pragma once
#include <iostream>
#include <chrono>

enum opt {SEC = 0, MS, NS};

void startTime();
void endTime();
void displayTime(opt option);