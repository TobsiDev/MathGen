#include <iostream>
#include <fstream>

#include "plus.h"
#include "menu.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Opening test file." << endl;
    ofstream file;
    file.open ("test.txt");
    
    fileLoop(file);

    file << sendStr() << "\n" << endl;

    file.close();
    
    cout << "Done.\n" << endl;
    
    doShit();

    printTitle();

    // Add this to a while loop (under this line)
    printMenu();
    menuChoice();

    return 0;
}
