/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:30:07 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:13:23 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";
const std::string INVERSE = "\033[7m";

class ClapTrap
{
	private:
		std::string _name;
		int	_HitPoints;
		int	_EnergyPoints;
		int	_AttackDamage;

	public:
		ClapTrap(); //canonical
		ClapTrap(ClapTrap const &src); //canonical
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &rhs); //canonical
		void	getInfo();
		void	setAttack(int AttackDamage);
		int		getHp(void);
		int		getEp(void);

		void	attack(const std::string &target);
		void	takeDmg(unsigned int amount);
		void	beRepaired(unsigned int amount);
};