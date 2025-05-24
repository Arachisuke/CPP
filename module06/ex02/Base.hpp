/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:17:48 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 16:17:51 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <ctime>
#include <exception>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

class A: public Base{
	
};

class B: public Base{
	
};

class C: public Base{
	
};

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);