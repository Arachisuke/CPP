/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:04:51 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/22 13:00:46 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->_name <<  " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(str name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    this->_name = name;
    std::cout << this->_name << " takes the weapon called " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "destructor humanA" << std:: endl;
}
