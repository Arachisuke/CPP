/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:11 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/16 15:37:00 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : max_contacts(8), current_nb(0), nb_contacts(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
    std::string     str;
    
    std::cin >> str;
    
}

void PhoneBook::search_contact()
{
}


// juste a ecrire les interieur de fonction et les utilsier et tester c'est bon!