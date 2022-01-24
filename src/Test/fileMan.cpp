#include "fileMan.h"
#include "color.h"

int spaceBetweenLang = 24;
int languages = 2;

void langChoice(){
    int count = 0;
    int lineUnder = 0;
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
        
        
        readLangOptions(count, count+1);
    }
    
    //TODO:
        // Make the user chose their language here.
        // Do we save the choice in a config file?
    
    std::string str;
    std::cout << "\nAwnser here: ";
    std::cin >> str;
    
    char cho = str.at(0);
    int choi = 4; // The line where the "You chose x language" is located.
    std::ofstream conf("config.conf");

    switch (cho)
    {
    case '1':
        // English
        std::cout << GRN(<< readLine(choi) <<) << std::endl;
        conf << "ENG_US" << std::endl;
        break;
    case '2':
        // Danish
        setInt(choi);
        std::cout << GRN(<< readLine(choi) <<) << std::endl;
        conf << "DAN_DK" << std::endl;
        break;
    
    default:
        std::cout << RED(<< readLine(7) <<) << std::endl;
        break;
    }
    /*Writes the awnser to a config file. 
    Now everytime we need to know what language they use, just read it from the config file.
    */
   conf.close();

}

std::string readLine(int lineNumb){
    lineNumb--;

    setInt(lineNumb);

    std::string line (""); // stores the line we've read
    std::ifstream fileToRead ("lang.lang"); // this is the file we're reading from

    for (size_t i = 0; i <= lineNumb; i++) // for loop to loop to the line we want to read
    {
        getline(fileToRead, line);
    }
    fileToRead.close(); // closes the file we're reading from
    return line;
}

void readLinesFromTo(int lineStart, int lineEnd){
    // i increment the variables to match the requested lines
    lineStart--;
    lineEnd--;

    setInts(lineStart, lineEnd);

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

void readLangOptions(int startLine, int endLine){
    startLine--;
    endLine--;
    std::string lineFT("");
    std::ifstream langFile ("lang.lang");

    for (size_t i = 0; i <= endLine; i++)
    {
        if (i >= startLine)
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

void setInts(int& i1, int& i2){
    LANGUAGE language = langConf();
    switch (language)
    {
    case ENG_US:
        //
        break;
    case DAN_DK:
        i1 += (spaceBetweenLang*DAN_DK);
        i2 += (spaceBetweenLang*DAN_DK);
        break;
    
    default:
        break;
    }
}

void setInt(int& i1){

    LANGUAGE language = langConf();
    switch (language)
    {
    case ENG_US:
        //
        break;
    case DAN_DK:
        i1 += (spaceBetweenLang*DAN_DK);
        break;
    
    default:
        break;
    }
}

LANGUAGE langConf(){
    std::string str("");

    //TODO:
        //MAKE SURE THERE IS A CONFIG FILE, IF NOT. CALL langChoice();

    std::ifstream conf ("config.conf");
    getline(conf, str);
    std::cout << "FROM langConf(): " << str << std::endl;
    conf.close();
    
    if (str == "ENG_US")
    {
        return ENG_US;
    }
    else if (str == "DAN_DK")
    {
        return DAN_DK;
    }
    else
    {
        return ENG_US;
    }
}

void testL(int line){
    LANGUAGE language = langConf();
    
    switch (language)
    {
    case ENG_US:
        //
        break;
    case DAN_DK:
        line += (spaceBetweenLang*DAN_DK);
        break;
    
    default:
        break;
    }


}