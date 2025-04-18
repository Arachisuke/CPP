/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:15:47 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:17:36 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club"); // une class de type weapon, son nom sera crude spiked club.
        HumanA bob("Bob", club); // class humanA, instance bob, name = bob, et il prend club qui est une class weapon
        bob.attack(); // du coup bob je veux que ca weapon il la recupere du name weapon, et apres attack
        club.setType("some other type of club"); // du coup je change de type de weapon
        bob.attack(); // normalement vu que la premiere fois jai recupere une reference, je dois certainement avoir recu le changement
    }
    {
        Weapon club = Weapon("crude spiked club"); //  class weapon, je change son type
        HumanB jim("Jim"); // je cree humanB, et son name c'est JIM.
        jim.setWeapon(club); // je recupere le type de weapon via weapon.
        jim.attack(); // j'attaque avc le type
        club.setType("some other type of club"); // je change le type par some other
        jim.attack(); // et la ca devrais avoir change.
    }
    return 0;
}


//HUmanb a pas toujours une arme, du coup lui deja c'est pointeur et pas reference.


// du coup HumanA, je passe une ref, via le constructeur ?
// ensuite je change son type via la class weapon.


// HumanB, je setWeapon, je lui envoie un pointeur sur le type de weapon, et ensuite j'attaque et via weapon je change son nom et normalement il change dans ma class
// la difference cest que weapon peut devenir null.