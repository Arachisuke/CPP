/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:53:01 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:07:46 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: Default constructor called." << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal: Copy constructor called." << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called." << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "No animal type, no sound." << std::endl;
}