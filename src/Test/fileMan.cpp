#include "fileMan.h"
#include "color.h"

int spaceBetweenLang = 22;
int languages = 2;

int langChoice(){
    int count = 0;
    for (size_t i = 0; i < languages; i++)
    {
        if (i==0)
        {
            count = 2; 
        }
        else
        {
            count = 2+(spaceBetweenLang*i);
        }
        
        
        readLangOptions(count);
    }
    
    //TODO:
        // Make the user chose their language here.
        // Do we save the choice in a config file?
    
    return 1;
}

std::string readLine(int lineNumb, LANGUAGE language){
    lineNumb--;
    std::string line (""); // stores the line we've read
    std::ifstream fileToRead ("lang.lang"); // this is the file we're reading from

    for (size_t i = 0; i <= lineNumb; i++) // for loop to loop to the line we want to read
    {
        getline(fileToRead, line);
    }
    fileToRead.close(); // closes the file we're reading from
    return line;
}

void readLinesFromTo(int lineStart, int lineEnd, LANGUAGE language){
    // i increment the variables to match the requested lines
    lineStart--;
    lineEnd--;

    switch (language)
    {
    case ENG_US:
        //
        break;
    case DAN_DK:
    std::cout << "SpaceBetweenLang: " << spaceBetweenLang << std::endl;
    std::cout << "DAN_DK: " << DAN_DK << std::endl;
        lineEnd += (spaceBetweenLang*DAN_DK);
        lineStart += (spaceBetweenLang*DAN_DK);
        break;
    
    default:
        break;
    }

    std::string lineFT("");
    std::ifstream langFile ("lang.lang");

    for (size_t i = 0; i <= lineEnd; i++)
    {
        if (i >= lineStart)
        {
            getline(langFile, lineFT);
            std::cout << lineFT << std::endl;
        }else
        {
            getline(langFile, lineFT);
        }
    }
    std::cout << std::endl;
    langFile.close();
}

void printTitle(){
    std::string line("");
    std::ifstream titleFile ("title.lang");

    for (size_t i = 0; i <= 5; i++)
    {
        getline(titleFile, line);
        std::cout << RED(BackBLK(<< line << )) << std::endl;
    }
    std::cout << std::endl;
    titleFile.close();
}

void readLangOptions(int lineNumb){
    lineNumb--;
    std::string line (""); // stores the line we've read
    std::ifstream fileToRead ("lang.lang"); // this is the file we're reading from

    for (size_t i = 0; i <= lineNumb; i++) // for loop to loop to the line we want to read
    {
        getline(fileToRead, line);
    }
    std::cout << line << std::endl;
    fileToRead.close(); // closes the file we're reading from
}
