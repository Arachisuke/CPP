/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:15:47 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/22 13:32:33 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

// HUmanb a pas toujours une arme, du coup lui deja c'est pointeur et pas reference.

// du coup HumanA, je passe une ref, via le constructeur ?
// ensuite je change son type via la class weapon.

// HumanB, je setWeapon, je lui envoie un pointeur sur le type de weapon, et ensuite j'attaque et via weapon je change son nom et normalement il change dans ma class
// la difference cest que weapon peut devenir null.