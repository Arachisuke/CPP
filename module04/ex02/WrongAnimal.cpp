/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:07:38 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/06 17:07:52 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    std::cout << "WrongAAnimal: Default constructor called." << std::endl;
}

WrongAAnimal::WrongAAnimal(WrongAAnimal const &src)
{
    std::cout << "WrongAAnimal: Copy constructor called." << std::endl;
    *this = src;
}

WrongAAnimal::~WrongAAnimal()
{
    std::cout << "WrongAAnimal: Destructor called." << std::endl;
}

WrongAAnimal &WrongAAnimal::operator=(WrongAAnimal const &rhs)
{
    std::cout << "WrongAAnimal Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

std::string WrongAAnimal::getType() const
{
    return this->_type;
}

void WrongAAnimal::makeSound() const
{
    std::cout << "No WrongAAnimal type, no sound." << std::endl;
}
