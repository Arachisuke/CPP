/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:04:51 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 16:37:18 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(str weapon)
{
    std::cout << this->name <<  "attacks with their" << weapon << std::endl;
}

HumanA::HumanA(str name, Weapon weapon)
{
    this->name = name;
    std::cout << name << "takes the weapon called" << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "destructor called" << std:: endl;
}
