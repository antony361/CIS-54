#include<iostream>
#include<fstream>
#include<string>

int ModifyFile(std::ifstream &InputFile, std::ofstream &OutputFile)
{
    char StringFromFile[7];
    
    if (InputFile)
    {
        InputFile >> StringFromFile;
        InputFile.close();
    }
    
    if (OutputFile)
    {
        OutputFile << "Text for outputting";
        OutputFile.close();
    }
    return 0;
}

int main()
{
    std::string FilePath;
    
    std::cout << "Please enter a file path: ";
    std::cin >> FilePath;
    
    std::ifstream InputFile(FilePath.c_str());
    std::ofstream OutputFile(FilePath.c_str());
    
    ModifyFile(InputFile, OutputFile);
    return 0;
}