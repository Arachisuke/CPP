/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:08 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:16:17 by macos            ###   ########.fr       */
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
    str name;
    str weapon;

    void attack();
    void setWeapon(Weapon name);
};

#endif

