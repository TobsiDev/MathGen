#include "menu.h"

void printTitle(){
    std::cout << RED(BackBLK(<< "\n\n" <<
                "███╗   ███╗ █████╗ ████████╗██╗  ██╗ ██████╗ ███████╗███╗   ██╗\n" <<
                "████╗ ████║██╔══██╗╚══██╔══╝██║  ██║██╔════╝ ██╔════╝████╗  ██║\n" <<
                "██╔████╔██║███████║   ██║   ███████║██║  ███╗█████╗  ██╔██╗ ██║\n" <<
                "██║╚██╔╝██║██╔══██║   ██║   ██╔══██║██║   ██║██╔══╝  ██║╚██╗██║\n" <<
                "██║ ╚═╝ ██║██║  ██║   ██║   ██║  ██║╚██████╔╝███████╗██║ ╚████║\n" <<
                "╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═══╝" <<)) << std::endl;/*<< "\n" <<
                "███╗   ███╗ █████╗ ████████╗██╗  ██╗ ██████╗ ███████╗███╗   ██╗\n" <<
                "████╗ ████║██╔══██╗╚══██╔══╝██║  ██║██╔════╝ ██╔════╝████╗  ██║\n" <<
                "██╔████╔██║███████║   ██║   ███████║██║  ███╗█████╗  ██╔██╗ ██║\n" <<
                "██║╚██╔╝██║██╔══██║   ██║   ██╔══██║██║   ██║██╔══╝  ██║╚██╗██║\n" <<
                "██║ ╚═╝ ██║██║  ██║   ██║   ██║  ██║╚██████╔╝███████╗██║ ╚████║\n" <<
                "╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═══╝\n" << std::endl;*/
                //std::cout << "Test" << std::endl;
}

void printMenu(){
    std::cout <<
    "\n" <<
    "1\tPlus\n" <<
    "0\tQuit\n"
    << std::endl;
}

int menuChoice(){
    std::string str;
    
    std::cout <<
    "Type what you wanna do here: ";
    std::cin >> str;
    
    char cho = str.at(0);   // Gets the first char in the input string
                            /// Might be able to look at 2 chars like (22) and still get 22 by assigning 2 chars.

    switch (cho) // takes the char from the input string and checks out what the user typed. 
    {
    case '1':
        std::cout << "Cool cool" << std::endl; // Test line
        return 1;
        break;
    
    default:
        std::cout << "No BAD, BAD." << std::endl;  // Test line
        return 0;
        break;
    }
}