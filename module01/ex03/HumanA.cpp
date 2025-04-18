/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:04:51 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:32:24 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name <<  " attacks with their " << this->weapon << std::endl;
}

HumanA::HumanA(str name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon.getType(); // jai recupere une reference, du coup logiquement si je change weapon normalement lui aussi change a tester.
    std::cout << this->name << " takes the weapon called " << this->weapon << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "destructor humanA" << std:: endl;
}
