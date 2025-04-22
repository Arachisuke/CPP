/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:54 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/22 13:24:58 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &name)
{
    this->_weapon = &name;
}

HumanB::HumanB(str name) : _name(name), _weapon(NULL)
{
    this->_name = name;
    std::cout << "constructor humanB" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "destructor humanB" << std::endl;
}
