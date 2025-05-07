/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:10:18 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 15:50:07 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
    Animal *tab[20];

    int x = 0;
    for (; x < 10; x++)
        tab[x] = new Dog();
    for (; x < 20; x++)
        tab[x] = new Cat();

    x = 0;
    for (; x < 10; x++)
        tab[x]->makeSound();
    for (; x < 20; x++)
        tab[x]->makeSound();

    x = 0;
    for (; x < 20; x++)
        delete tab[x];

    Dog OGdog;
    Cat OGcat;

    std::cout << "/////////////////////////////////////////////////////"<< std::endl;


    OGdog.setIdea(0, "This is a nice tree to pee on.");
    OGdog.setIdea(1, "Wow another great tree to pee on!");

    OGcat.setIdea(0, "This dog looks dumb.");
    OGcat.setIdea(1, "I'm gonna scratch his face.");

    Dog COPYdog = OGdog;
    Cat COPYcat = OGcat;

    std::cout << "OGdog idea: " << OGdog.getIdea(0) << std::endl;
    std::cout << "OGdog idea: " << OGdog.getIdea(1) << std::endl;
    std::cout << "COPYdog idea: " << COPYdog.getIdea(0) << std::endl;
    std::cout << "COPYdog idea: " << COPYdog.getIdea(1) << std::endl;

    std::cout << "OGcat idea: " << OGcat.getIdea(0) << std::endl;
    std::cout << "OGcat idea: " << OGcat.getIdea(1) << std::endl;
    std::cout << "COPYcat idea: " << COPYcat.getIdea(0) << std::endl;
    std::cout << "COPYcat idea: " << COPYcat.getIdea(1) << std::endl;
}

// shallow copy meme cle pour la meme maison
// deep copy nouvelle maison identique, et cle differente

