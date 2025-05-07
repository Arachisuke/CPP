/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:53:01 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:04:02 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal: Default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "AAnimal: Copy constructor called." << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal: Destructor called." << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
    std::cout << "AAnimal Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound() const
{
    std::cout << "No AAnimal type, no sound." << std::endl;
}