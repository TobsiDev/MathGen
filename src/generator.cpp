#include "generator.h"
#include "dbgTime.h"

std::string sendStr(){
    return "Test from plus.cpp!!!";
}

void fileLoop(std::ofstream& file, std::ofstream& fileTeacher, int amount, char mathNotation, bool useScienceNotations){

    startTime(); // Sets the Debug timer
    
    if (useScienceNotations == true)
    {
        writeSci(file, fileTeacher, amount, mathNotation);
    }
    else
    {
        writeNormal(file, fileTeacher, amount, mathNotation);
    }
    endTime(); // Ends the debug timer
    displayTime(SEC); // Displays the time between startTime() and endTime() 
}

double getNumb(/*add 2 ints. A min and a max*/){
    struct timespec tS;
    clock_gettime(CLOCK_MONOTONIC, &tS);
    srandom((time_t)tS.tv_nsec);
    return (random()%10000); // %10000 means the maximum number is 10000 (think it's 9999)
}

double calcRes(int n1, int n2, int r, char MN){
    switch (MN)
    {
    case '+':
        return (n1 + n2);
        //break;

    case '-':
        return (n1 - n2);
        //break;
    case '*':
        return (n1 * n2);
    
    default:
        return (n1 + n2);
        //break;
    }
}

int getWidth(int numb1, int numb2){
    if (numb1 < numb2)
    {
        return (int)(log10(numb2)+1);
    }
    else
    {
        return (int)(log10(numb1)+1);
    }
}

void writeNormal(std::ofstream& file, std::ofstream& fileTeacher, int& amount, char& mathNotation){
    double numb1, numb2, res, setWidth;
    std::cout << "Starts writing to File" << std::endl;
    for (int i = 0; i < amount; i++)
    {
        file << i << ")" << std::endl;
        fileTeacher << i << ")" << std::endl;

        numb1 = getNumb();
        numb2 = getNumb();
        res = calcRes(numb1, numb2, res, mathNotation);
        // std::cout << "Calc: " << std::fixed << res << std::endl; // Debuging
        
        setWidth = getWidth(numb1, numb2);

        file << "   " << std::setw(setWidth) << numb1 << std::endl;
        file << mathNotation << "  " << std::setw(setWidth) << numb2 << std::endl;
        file << "\n=  " << "\n" << std::endl;

        fileTeacher << "   " << std::setw(setWidth) << numb1 << std::endl;
        fileTeacher << mathNotation << "  " << std::setw(setWidth) << numb2 << std::endl;

        fileTeacher << "\n=  " << std::fixed << res << "\n" << std::endl;
        //fileTeacher << "   " << numb1 << " " << mathNotation << " " << numb2 << " = "<< res << "\n" << std::endl;
    }
    std::cout << "Done writing to File" << std::endl;
}

void writeSci(std::ofstream& file, std::ofstream& fileTeacher, int& amount, char& mathNotation){
    double numb1, numb2, res, setWidth;
    std::cout << "Starts writing to File" << std::endl;
    for (int i = 0; i < amount; i++)
    {
        file << i << ")" << std::endl;
        fileTeacher << i << ")" << std::endl;

        numb1 = getNumb();
        numb2 = getNumb();
        res = calcRes(numb1, numb2, res, mathNotation);
        // std::cout << "Calc: " << std::fixed << res << std::endl; // Debuging
        
        setWidth = getWidth(numb1, numb2);

        file << "   " << std::setw(setWidth) << numb1 << std::endl;
        file << mathNotation << "  " << std::setw(setWidth) << numb2 << std::endl;
        file << "\n=  " << "\n" << std::endl;

        fileTeacher << "   " << std::setw(setWidth) << numb1 << std::endl;
        fileTeacher << mathNotation << "  " << std::setw(setWidth) << numb2 << std::endl;

        fileTeacher << "\n=  " << std::scientific << res << "\n" << std::endl;
        //fileTeacher << "   " << numb1 << " " << mathNotation << " " << numb2 << " = "<< res << "\n" << std::endl;
    }
    std::cout << "Done writing to File" << std::endl;
}