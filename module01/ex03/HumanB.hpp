/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:08 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/22 13:25:12 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(str name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon &name);

private:
    str _name;
    Weapon *_weapon;
};

#endif
