/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:29:28 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:13:23 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(){
	std::cout << "ClatTrap: Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "ClatTrap: Copy constructor called." << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "ClapTrap: Constructor of " << this->_name << " called." << std::endl;
	ClapTrap::getInfo();
}


ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap: Destructor of " << this->_name << " called." << std::endl;
}


ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);

}
void	ClapTrap::setAttack(int AD){
	this->_AttackDamage = AD;
	std::cout << "ClapTrap " << this->_name << " Attack Damage has been set to " << this->_AttackDamage << "." << std::endl;
}

void	ClapTrap::getInfo(){
	std::cout << "ClapTrap " << this->_name << " has:" << std::endl;
	std::cout << "   " << this->_HitPoints << " Hit points left." << std::endl;
	std::cout << "   " << this->_EnergyPoints << " Energy points left." << std::endl;
	std::cout << "   " << this->_AttackDamage << " Attack damage." << std::endl;
	std::cout << std::endl;
}

int	ClapTrap::getHp(){
	return this->_HitPoints;
}

int	ClapTrap::getEp(){
	return this->_EnergyPoints;
}

void	ClapTrap::attack(const std::string &target){
	if (this->_EnergyPoints <= 0)
		std::cout << "Claptrap " << this->_name << " can't attack without Energy Points." << std::endl;
	if (this->_HitPoints <= 0)
		std::cout << "Claptrap " << this->_name << " can't attack without Hit Points." << std::endl;
	else if (this->_EnergyPoints > 0 && this->_HitPoints > 0){
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
	ClapTrap::getInfo();
}

void	ClapTrap::takeDmg(unsigned int amount){
	this->_HitPoints -= amount;
	std::cout << "Claptrap " << this->_name << " took " << amount << " damage after being attacked!" << std::endl;
	ClapTrap::getInfo();
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_EnergyPoints <= 0)
		std::cout  << "Claptrap " << this->_name << " can't be repaired without Energy Points." << std::endl;
	if (this->_HitPoints <= 0)
		std::cout << "Claptrap " << this->_name << " can't be repaired without Hit Points." << std::endl;
	else if (this->_EnergyPoints > 0 && this->_HitPoints > 0){
		this->_EnergyPoints--;
		this->_HitPoints += amount;
		std::cout <<  "ClapTrap " << this->_name << " got repaired for " << amount << " Hit Points." << std::endl;
	}
	ClapTrap::getInfo();
}