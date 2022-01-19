#pragma once
#include <iostream>
#include <chrono>

enum opt {sec = 0, ms, ns};

void startTime();
void endTime();
void displayTime(opt option);