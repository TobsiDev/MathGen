#include <iostream>
#include "fileMan.h"

int main(int argc, char const *argv[])
{
    //langChoice();
    startup();
    printTitle();
    //std::cout << "Test" << std::endl;
    std::cout << readLine(14) << "\n\n" << std::endl;
    readLinesFromTo(8, 10);
    testL(21); // Multiplication
    return 0;
}
