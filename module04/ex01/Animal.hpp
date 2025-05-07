/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:52:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:08:35 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	std::string getType() const;
	virtual void makeSound() const;
};
