/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:07:38 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/06 17:07:52 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal: Copy constructor called." << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "No WrongAnimal type, no sound." << std::endl;
}
