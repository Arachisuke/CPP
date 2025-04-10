/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:11 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/10 19:18:17 by macos            ###   ########.fr       */
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

    if (this->current_nb == this->max_contacts - 1) // si t'es le dernier et que tu veux re add alors on supprime le contact 0
        this->current_nb = 0;
        
    system("clear");
    while(str.length() == 0)
    {
        std::cout << "Type a name : ";
        std::getline(std::cin, str);
    }
    if (std::cin.eof())
        exit(0);
    str = "";
     
    this->array[this->current_nb].setName(str); // bien penser que setName ca set que ce name la de ce phonebook car chaque setname a un name different il a le name du phonebook.
    system("clear");
    while(str.length() == 0)
    {
        std::cout << "Type a lastname : ";
        std::getline(std::cin, str);
    }
    if (std::cin.eof())
        exit(0);
    str = ""; 
            
    this->array[this->current_nb].setLast(str);
    system("clear");
    while(str.length() == 0)
    {
        std::cout << "Type a nickname : ";
        std::getline(std::cin, str);
    }
    if (std::cin.eof())
        exit(0);
    str = ""; 
            
    this->array[this->current_nb].setNick(str);
    system("clear");
    while(str.length() == 0)
    {
        std::cout << "Type a phone number : ";
        std::getline(std::cin, str);
    }
    if (std::cin.eof())
        exit(0);
    str = ""; 
            
    this->array[this->current_nb].setPhone(str);
    system("clear");
    while(str.length() == 0)
    {
        std::cout << "Type a secret ";
        std::cout << "\xF0\x9F\x91\xB9 :";
        std::getline(std::cin, str);
    }
    if (std::cin.eof())
        exit(0);
        
    this->array[this->current_nb].setSecret(str);
    system("clear");
    this->current_nb++;
    if (nb_contacts < 8)
        this->nb_contacts++;
}

void PhoneBook::search_contact()
{
    std::string str;
    std::string input;
    int index;
    
    str = this->array[0].getName();
    if (str.empty())
        std::cout << "it's empty";
    else
    {
        std::cout << "Type a contact's index to obtain personal informations 0 to 7";
        std::getline(std::cin, input);
        index = std::stoi(input); // convertit string → int

    while(input.length() != 1 && index < 0 && index > 7)
    {
        std::cout << "Type a contact's index between 0 and 7, inclusive. ";
        std::getline(std::cin, input);
        index = std::stoi(input); // convertit string → int
    }
    
    std::cout <<  "Index| Firstname|  Lastname|  Nickname";
    std::cout << "";
        
        // sortir la array depuis l'index.
        // ensuite faire une manipulation de string en balle et afficher.
        // gerer quelque cas, je pense ya des cas a gerer quand meme a y reflechir et lire les autres git.
        this->array[index]
}

// juste a ecrire les interieur de fonction et les utiliser et tester c'est bon!
// afficher l'unicode. @@@
// proteger les std::cin ? dun eventuel ctrl-D @@
// proteger les getline a chaque fois ? @@@@
// est ce que si jecris exit dans les types a commmand jexit ? NON




// Les champs d’un contact enregistré ne peuvent être vides.
// deux choix s'offre a moi je lui fais reecrire tant que la chaine est vide ou bien comme j'ai fais la je met non specifie.
// la solution c'est faire un while tant que la taille de la chaine est a 0 je lance la boucle.

// faire search je te laisse 2h, sinon tu lis t'as pas le temps.
// search sans contact a gerer.
// pour le search, un simple affichage avec un tableau, et pas forcer les caractere a 8, il est dit que ca doit faire un point sil est trop grand.