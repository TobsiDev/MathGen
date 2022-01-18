#include <iostream>
#include <fstream>

#include "plus.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Opening test file." << endl;
    ofstream file;
    file.open ("test.txt");
    
    fileLoop(file);

    file << sendStr() << "\n" << endl;

    file.close();
    
    cout << "Done." << endl;
    
    doShit();

    return 0;
}
