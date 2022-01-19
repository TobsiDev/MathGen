#include <iostream>

#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Done.\n" << endl;
    
    printTitle(); // Prints the Title in the console

    // Add this to a while loop (under this line)
    printMenu();
    menuChoice();

    return 0;
}
