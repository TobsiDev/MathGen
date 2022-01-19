#include "plus.h"

std::string sendStr(){
    return "Help MEEEE!!!";
}

void fileLoop(std::ofstream& file, int amount){
    file << "Writeing from plus.cpp" << std::endl;
    for (int i = 0; i < amount; i++)
    {
        file << "Line: " << i << "\n :)" << std::endl;
    }
    
}