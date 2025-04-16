/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:11 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 11:20:12 by wzeraig          ###   ########.fr       */
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
    while (str.length() == 0)
    {
        std::cout << "Type a name : ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }

    this->array[this->current_nb].setName(str);
    str = "";
    system("clear");
    while (str.length() == 0)
    {
        std::cout << "Type a lastname : ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }

    this->array[this->current_nb].setLast(str);
    str = "";
    system("clear");
    while (str.length() == 0)
    {
        std::cout << "Type a nickname : ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }

    this->array[this->current_nb].setNick(str);
    str = "";
    system("clear");
    while (str.length() == 0)
    {
        std::cout << "Type a phone number : ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }

    this->array[this->current_nb].setPhone(str);
    str = "";
    system("clear");
    while (str.length() == 0)
    {
        std::cout << "Type a secret ";
        std::cout << "\xF0\x9F\x91\xB9 :";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }
    this->array[this->current_nb].setSecret(str);
    system("clear");
    this->current_nb++;
    if (nb_contacts < 8)
        this->nb_contacts++;
}

std::string ft_tronc(std::string str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    if (str.length() < 10)
    {
        if (str.length() < 10)
            str = std::string(10 - str.length(), ' ') + str;
    }
    return str;
}

int to_int(const std::string &str)
{
    if (str.size() > 1 || str.empty() || !std::isdigit(str[0]))
        return (8);
    std::stringstream ss(str);
    int result;
    ss >> result;
    return result;
}

void PhoneBook::search_contact()
{
    std::string str;
    std::string last;
    std::string first;
    std::string nickname;
    std::string input;

    int index;

    str = this->array[0].getName();
    if (str.empty())
    {
        std::cout << "it's empty" << std::endl;
        return;
    }
    index = -1;
    while (index < 0 || index > 7)
    {
        std::cout << "Type a contact's index between 0 and 7, inclusive. " << std::endl;
        std::getline(std::cin, input);
        index = to_int(input);
        if (std::cin.eof())
            exit(0);
    }

    last = this->array[index].getLast();
    first = this->array[index].getName();
    nickname = this->array[index].getNick();

    if (last.empty())
    {
        std::cout << "There is no contact at that index." << std::endl;
        return;
    }
    last = ft_tronc(last);
    first = ft_tronc(first);
    nickname = ft_tronc(nickname);
    std::cout << "     Index| Firstname|  Lastname|  Nickname" << std::endl;
    std::cout << "        " << index << "|" << first << "|" << last << "|" << nickname << std::endl;
}