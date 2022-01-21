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
        fileLoop(file, fileTeacher, numb, '*', inputSci());
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
    std::cout << "Write a filename: ";
    std::cin.ignore();
    std::getline(std::cin, fileName);
    std::cout << "FILENAME: " << fileName << std::endl;
    return fileName;
}

int inputAmount(){ // User inputs the amount of math problems they want
    int amount;
    std::cout << "Write the amount: ";
    try // Try at error handling
    {
        std::cin >> amount;
        if (amount <= 0)
        {
            std::cout << RED("ERROR:") << " NOT A VALID NUMBER" << std::endl; // Prints a "error message" to the user
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << RED("ERROR:") << " NOT A NUMBER" << std::endl;
    }
    std::cout << "AMOUNT: " << amount << std::endl;
    return amount;
}