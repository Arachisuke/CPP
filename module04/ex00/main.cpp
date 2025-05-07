/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:10:18 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:12:41 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    const WrongAnimal *a = new WrongCat();
    const WrongAnimal *b = new WrongAnimal();
    const WrongCat *c = new WrongCat();
    std::cout << "WrongANIMAL -> WRONGCAT :" << std::endl;
    a->makeSound();
    std::cout << "WrongANIMAL -> WrongANIMAL :" << std::endl;
    b->makeSound();
    std::cout << "WRONGCAT -> WRONGCAT  :" << std::endl;
    c->makeSound();
    return (0);
}

// int main()
// {
//     const WrongAnimal *WrongMeta = new WrongAnimal();
//     const WrongAnimal *wcat = new WrongCat();
//     const Animal *meta = new Animal();
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     std::cout << std::endl
//               << "///////////////////////////////////////////" << std::endl
//               << std::endl;

//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     wcat->makeSound();
//     WrongMeta->makeSound();

//     delete meta;
//     delete j;
//     delete i;
//     delete WrongMeta;
//     delete wcat;

//     Cat testcat;
//     WrongCat testwcat;
//     WrongAnimal testwanimal;
//     std::cout << std::endl
//               << "///////////////////////////////////////////" << std::endl
//               << std::endl;

//     testcat.makeSound();
//     testwcat.makeSound();
//     testwanimal.makeSound();

//     return 0;
// }

// le const s'applique direct a ce qu'il y a apres.
/*
const animal i = l'animal pointer est un const.
animal const i = c'est le i qui est const dnc le pointeur change pas. */

// type de test a faire
// wrongAnimal = new wrongcat
// wrongAnimal = new wronganimal
// wrongCat = new wrongcat
// wrongCat = new wrongAnimal

// virtual dans la mere et pas dans la fille
// virtual dans la fille et pas dans la mere.

// reflexion
// si wrongAnimal(mere) a virtual... -> wrongCat ?
// un type enfant ne peux pas pointer un parent -> Car l'enfant a des fonctions en plus, qui n'est pas supporte par ce qui est pointer(parent) ca va cree un comportement indefini

// ca marche mere pas dans l'enfant car dans la mere il voit que ca peut etre redefini dans la fille, et si je le remet dans la fille cest que ca peut etre redefini dans la petite fille.