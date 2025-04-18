/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:54 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:32:18 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

void HumanB::setWeapon(Weapon name)
{
    this->weapon = name.getType();
}

HumanB::HumanB(str name)
{
    this->name = name;
    std::cout << "constructor humanB" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "destructor humanB" << std::endl;
}