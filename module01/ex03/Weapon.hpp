/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:19 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/17 18:17:04 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>
#include <iostream>
#include <cctype>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

typedef std::string str;

class Weapon
{
public:
    Weapon(str name);
    ~Weapon();
    const str &getType(void) const;
    void setType(const str &value);

private:
    str type;
};

#endif