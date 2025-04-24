#include <iostream>
#include <string>
#include <fstream>



int main(int argc, char **argv)
{
    std::string line;
    std::string s1;
    std::string new_file;

    if (argc != 4) // pas le bon nombre d'arg
    {
        std::cerr << "Error: enter filename S1 S2" << std::endl;
        return 1;
    }
    std::ifstream file(argv[0]);
    if (!file) // j'arrive pas louvrir.
        std::cerr << "Error open file";
    s1 = argv[1];
    new_file = argv[0];
    new_file.append(".replace");
    std::getline(file, line);
    if (line.empty())
    std::cerr << "empty file";
    while(std::getline(file, line))
    {
        if (line.compare(s1) == 0)

    }


    return 0;
}           



// nombre d'arg.
// doesnt exist file.
// file vide
// chaine vide.