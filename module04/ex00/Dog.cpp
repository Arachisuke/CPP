/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:55:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:07:37 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(Dog const &src) : Animal()
{
    std::cout << "Dog: Copy constructor called." << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called." << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF I'm a dog." << std::endl;
}