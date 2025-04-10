/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:31:48 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/10 16:30:44 by macos            ###   ########.fr       */
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
        if (std::cin.eof())
            return (0);
        if (input.compare("ADD") == 0)
            PhoneBook.add_contact();
        if (input.compare("SEARCH") == 0)
            PhoneBook.search_contact();
        if (input.compare("EXIT") == 0)
            return (0);
    }
    return (0);
}

// est ce que je dois quitter si je met un /n ....
//"Une fois la commande correctement exécutée"

/*
Index| Firstname|  Lastname|  Nickname
    0|     weowe|       wef|          
    1|    okokok|    okokok|    okokok
    2|wefjwe'jw.|      wjef|weifjweif.

Type a contact's index to obtain personal informations : */