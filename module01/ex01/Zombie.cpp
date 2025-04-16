/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:43:44 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 14:13:15 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::num = 0;

Zombie::Zombie()
{
	Zombie::num++;
	std::cout << "Zombie number :" << Zombie::num << " has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie named " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(str name)
{
	this->_name = name;
}