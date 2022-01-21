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
    "2\tMinus\n" <<
    "3\tMultiplication\n" <<
    "\n" <<
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
        case '0':
            std::cout << GRN("C'ya next time.") << std::endl;
            return 0; // exits the program
            break;

        case '1':
            writeToFile(PLUS);
            return 1;
            break;

        case '2':
            writeToFile(MINUS);
            return 2;
            break;
        case '3':
            writeToFile(MULTI);
            return 3;
            break;

        default:
            std::cout << RED("Not an option.") << std::endl;  // Test line
            return 0; // exits the program
            break;
    }
}

bool inputSci(){

    std::cout << "Do you want to get the awnsers as science notations?\n(Y)es\n(N)o\n\n";

    std::string str;
    
    std::cout <<
    "Type what you wanna do here: ";
    std::cin >> str;
    
    char sci = str.at(0);   // Gets the first char in the input string
    toupper(sci);

    switch (sci)
    {
    case 'Y':
    case 'y':
        return (true);
        break;
    
    default:
        break;
    }
    return false;
}