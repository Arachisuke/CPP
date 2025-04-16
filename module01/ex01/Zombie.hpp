/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:38:41 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 14:01:26 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

typedef std::string str;

class Zombie
{
    private:
        std::string _name;

	public:
		Zombie(void);
		~Zombie(void);
        void announce(void);
        void setName(str name);
      static int num;
};

Zombie* zombieHorde( int N, str name );

#endif