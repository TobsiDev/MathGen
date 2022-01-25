#include <iostream>

#include "menu.h"
#include "fileMan.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Done.\n" << endl;
    
    startup();
    printTitle(); // Prints the Title in the console
    
    // Add this to a while loop (under this line)
    printMenu();
    menuChoice();

    return 0;
}
