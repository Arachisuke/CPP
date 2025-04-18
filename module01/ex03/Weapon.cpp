/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:50:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:31:43 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(str name)
{
    this->type = name;
    std::cout << "constructor weapon" << std:: endl;
}

Weapon::~Weapon()
{
    std::cout << "destructor weapon" << std:: endl;
}

const str &Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(const str &value)
{
    this->type = value;
}
