/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:50:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 16:24:26 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(str name)
{
    this->type = name;
    std::cout << "constructor called" << std:: endl;
}

Weapon::~Weapon()
{
    std::cout << "desstructor called" << std:: endl;
}

const str &Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(const str &value)
{
    this->type = value;
}
