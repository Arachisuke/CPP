/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:09:36 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:07:23 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat: Default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
    std::cout << "WrongCat: Copy constructor called." << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Woof Woof I'm a WrongCat." << std::endl;
}
