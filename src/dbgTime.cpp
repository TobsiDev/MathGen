#include "dbgTime.h"

//Time code from https://en.cppreference.com/w/cpp/chrono 
auto start = std::chrono::steady_clock::now();
auto ending = std::chrono::steady_clock::now();

void startTime(){
    start = std::chrono::steady_clock::now();
}
void endTime(){
    ending = std::chrono::steady_clock::now();
}
void displayTime(opt option){
    std::chrono::duration<double> elapsed_seconds = ending-start;
    double timeMS = (elapsed_seconds.count() * 1000);
    switch (option)
    {
    case SEC:
        std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
        break;
    case MS:
        // TODO: Make a ms version
            /// 1sec = 1000ms
        std::cout << "elapsed time: " << timeMS << "ms\n";
        break;
    case NS:
        // TODO: Make a ns version
            /// 1sec = 1000000000ns
            /// 1ms = 1000000ns
        std::cout << "Not yet implemented.\n";
        break;
    
    default:
        break;
    }
}