/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:11 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/09 12:07:10 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertory.hpp"

PhoneBook::PhoneBook() : max_contacts(8), current_nb(0), nb_contacts(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
    std::string str;

    if (this->current_nb == this->max_contacts)
        this->current_nb = 0;
    system("clear");
    std::cout << "Type a name : ";
    std::getline(std::cin, str);
    if (str.empty())
        str = "Not specified";
    this->array[this->current_nb].setName(str); // bien penser que setName ca set que ce name la de ce phonebook car chaque setname a un name different il a le name du phonebook.
    system("clear");
    std::cout << "Type a lastname : ";
    std::getline(std::cin, str);
    if (str.empty())
        str = "Not specified";
    this->array[this->current_nb].setLast(str);
    system("clear");
    std::cout << "Type a nickname : ";
    std::getline(std::cin, str);
    if (str.empty())
        str = "Not specified";
    this->array[this->current_nb].setNick(str);
    system("clear");
    std::cout << "Type a phone number : ";
    std::getline(std::cin, str);
    if (str.empty())
        str = "Not specified";
    this->array[this->current_nb].setPhone(str);
    system("clear");
    std::cout << "Type a secret ";
    std::cout << "\xF0\x9F\x91\xB9 :";
    std::getline(std::cin, str);
    if (str.empty())
        str = "Not specified";
    this->array[this->current_nb].setSecret(str);
    system("clear");
    std::cout << "Type a name : ";
    this->current_nb++;
    if (nb_contacts < 8)
        this->nb_contacts++;
}

// void PhoneBook::search_contact()
// {
//     std::cout << index;
// }

// juste a ecrire les interieur de fonction et les utiliser et tester c'est bon!
// afficher l'unicode. @@@
// est ce que si jecris exit dans les types a commmand jexit ? NON


// Les champs d’un contact enregistré ne peuvent être vides.
// deux choix s'offre a moi je lui fais reecrire tant que la chaine est vide ou bien comme j'ai fais la je met non specifie.

// faire search je te laisse 2h, sinon tu lis t'as pas le temps.
// proteger les std::cin ? dun eventuel ctrl-D
// proteger les getline a chaque fois ?
