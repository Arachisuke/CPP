/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:19 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 16:24:47 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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