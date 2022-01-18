#include "plus.h"

void doShit(){
    std::cout << "testing 123" << std::endl;
}

std::string sendStr(){
    return "Help MEEEE!!!";
}

void fileLoop(std::ofstream& file){
    file << "Writeing from plus.cpp" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        file << "Line: " << i << "\n :)" << std::endl;
    }
    
}