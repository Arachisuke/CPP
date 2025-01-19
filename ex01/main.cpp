/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:31:48 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/19 15:38:11 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertory.hpp"


int main(void)
{
    PhoneBook   PhoneBook;
    std::string input;
    
    system("clear");
    std::cout << "Hii i'm siri." << std::endl;
    while (true)
    {
        input = "";
        std::cout << "Enter your command > ";
        std::getline(std::cin, input);
        if (input.empty())
            return (0);
        if (input.compare("ADD") == 0)
            PhoneBook.add_contact();
        if (input.compare("SEARCH") == 0)
            PhoneBook.add_contact();
        if (input.compare("EXIT") == 0)
            return (0);
    }
    return (0);
}

// faire la class phonebook dans un fichier .hpp
// les cmds des fonctions membre ??
// faire le max sans regarde apres tu regardes, tes la pour apprendre et te familliarise avec de la syntaxe cest meme pas reponses mdr
// 8 contact ect, ne pas oublier de mettre public car par defaut il est privee