/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:07:42 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";

    std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Cat: Copy constructor called." << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MEOOOOOOW I'm a cat." << std::endl;
}