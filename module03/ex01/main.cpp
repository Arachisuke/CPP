/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:11:45 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:14:18 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap ClapA("ClapA");
	ClapTrap ClapB("ClapB");
	ClapTrap ClapC("ClapC");
	ClapTrap ClapD("ClapD");
	ScavTrap ScavA("ScavA");
	ScavTrap ScavB("ScavB");

	ClapA.setAttack(10);
	ClapA.attack("ClapC");
	if (ClapA.getHp() > 0 && ClapA.getEp() > 0)
		ClapC.takeDmg(10);
	ClapC.beRepaired(10);
	ClapD.setAttack(2);
	for (int i = 0; i < 10; i++){
		ClapD.attack("ClapB");
		if (ClapD.getHp() > 0 && ClapD.getEp() > 0)
			ClapB.takeDmg(2);
		ClapB.beRepaired(1);
	}
	ScavA.attack("ScavB");
	if (ScavA.getHp() > 0 && ScavA.getEp() > 0)
		ScavB.takeDmg(ScavA.getAP());
	ScavA.guardGate();
}