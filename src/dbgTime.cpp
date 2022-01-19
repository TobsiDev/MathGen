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
    switch (option)
    {
    case sec:
        std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
        break;
    case ms:
        // TODO: Make a ms version
            /// 1sec = 1000ms
        break;
    case ns:
        // TODO: Make a ns version
            /// 1sec = 1000000000ns
            /// 1ms = 1000000ns
        break;
    
    default:
        break;
    }
}