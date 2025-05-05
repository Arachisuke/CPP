/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:30:51 by macos             #+#    #+#             */
/*   Updated: 2025/05/04 20:13:23 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ClapA("ClapA");
	ClapTrap ClapB("ClapB");
	ClapTrap ClapC("ClapC");
	ClapTrap ClapD("ClapD");

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
}