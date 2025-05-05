/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:57:59 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:38:41 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap: Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src){
	std::cout << "ScavTrap: Copy constructor called." << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap: Constructor of " << this->_name << " called." << std::endl;
	ScavTrap::getInfo();
}


ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Destructor of " << this->_name << " called." << std::endl;
}


ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}


int		ScavTrap::getAP(){
	return this->_AttackDamage;
}

void	ScavTrap::attack(const std::string &target){
	if (this->_EnergyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " can't attack without Energy Points." << std::endl;
	if (this->_HitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " can't attack without Hit Points." << std::endl;
	else if (this->_EnergyPoints > 0 && this->_HitPoints > 0){
		this->_EnergyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
	ScavTrap::getInfo();
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap: " << this->_name << " is now in Gate Keeper mode." << std::endl;
}