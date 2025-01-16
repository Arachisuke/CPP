#include <iostream>
#include <cstdlib>




int main(void)
{
    std::string input;


    while(true)
    {
    input = "";
    std::cout << "Enter your command > ";
    std::cin >> input;
    if (input.compare("ADD") == 0)
        // ce quil faut faire pour add
    if (input.compare("SEARCH") == 0) 
    // search
    if (input.compare("EXIT") == 0)
        return(0);
    }
}

// faire la class phonebook dans un fichier .hpp
// les cmds des fonctions membre ??
// faire le max sans regarde apres tu regardes, tes la pour apprendre et te familliarise avec de la syntaxe cest meme pas reponses mdr
//8 contact ect, ne pas oublier de mettre public car par defaut il est privee