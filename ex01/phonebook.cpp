/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:11 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/19 15:51:06 by wzeraig          ###   ########.fr       */
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
    std::cout << "Type a name U+1F608 : ";
    std::getline(std::cin, str);
    this->array[this->current_nb].setName(str); // bien penser que setName ca set que ce name la de ce phonebook car chaque setname a un name different il a le name du phonebook.
    system("clear");
    std::cout << "Type a lastname : ";
    std::getline(std::cin, str);
    this->array[this->current_nb].setLast(str);
    system("clear");
    std::cout << "Type a nickname : ";
    std::getline(std::cin, str);
    this->array[this->current_nb].setNick(str);
    system("clear");
    std::cout << "Type a phone number : ";
    std::getline(std::cin, str);
    this->array[this->current_nb].setPhone(str);
    system("clear");
    std::cout << "Type a secret U+1F600 : ";
    std::getline(std::cin, str);
    this->array[this->current_nb].setSecret(str);
    system("clear");
    std::cout << "Type a name : ";
    this->current_nb++;
    if (nb_contacts < 8)
        this->nb_contacts++;
}

void PhoneBook::search_contact()
{
}

// juste a ecrire les interieur de fonction et les utiliser et tester c'est bon!
// proteger les std::cin ? dun eventuel ctrl-D
// afficher l'unicode.
// est ce que si jecris exit dans les types a commmand jexit ?
// proteger les getline a chaque fois ?