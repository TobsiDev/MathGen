#include "writeToFile.h"
#include "generator.h"
#include "menu.h"

bool writeToFile(options cate){
    std::string fileType = ".txt";
    std::string name = inputFileName();
    int numb = inputAmount();

    if (numb == 0)
    {
        return false;
    }
    

    std::ofstream file;
    std::ofstream fileTeacher;
    file.open(name + "-Student" + fileType);
    fileTeacher.open(name + "-Teacher" + fileType);
    
    switch (cate)
    {
    case PLUS:
        std::cout << "plus" << std::endl;
        fileLoop(file, fileTeacher, numb, '+', false);
        file.close();
        fileTeacher.close();
        break;
    case MINUS:
        std::cout << "minus" << std::endl;
        fileLoop(file, fileTeacher, numb, '-', false);
        file.close();
        fileTeacher.close();
        break;    
    case MULTI:
        std::cout << "multi" << std::endl;
        fileLoop(file, fileTeacher, numb, '*', (askUser(readLine(10)+"\n"+readLine(11)+"\n"+readLine(12)+"\n\n")));
        file.close();
        fileTeacher.close();
        break; 
    case DIVIS:
        std::cout << "divis" << std::endl;
        fileLoop(file, fileTeacher, numb, '/', (askUser(readLine(10)+"\n"+readLine(11)+"\n"+readLine(12)+"\n\n")));
        file.close();
        fileTeacher.close();
        break; 
    default:
        break;
    }
    return true;
}

std::string inputFileName(){ // User inputs the filename
    std::string fileName;
    std::cout << readLine(13);
    std::cin.ignore();
    std::getline(std::cin, fileName);
    std::cout << readLine(14) << fileName << std::endl;
    return fileName;
}

int inputAmount(){ // User inputs the amount of math problems they want
    int amount;
    std::cout << readLine(15);
    try // Try at error handling
    {
        std::cin >> amount;
        if (amount <= 0)
        {
            std::cout << RED("ERROR: ") << readLine(18) << std::endl; // Prints a "error message" to the user
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << RED("ERROR: ") << readLine(19) << std::endl;
    }
    std::cout << readLine(16) << amount << std::endl;
    return amount;
}