/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:24:07 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:37:15 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(); //canonical
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src); // copy constuctor (canonical)
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &rhs); // = op overload (canonical)

		int		getAP();
		void	attack(const std::string &target);
		void	guardGate();
};