/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:52:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:06:06 by wzeraig          ###   ########.fr       */
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
	Animal();				   // canonical
	Animal(Animal const &src); // canonical
	virtual ~Animal();		   // C++ impose que toute classe possédant au moins une méthode virtuelle doit également avoir un destructeur virtuel.

	Animal &operator=(Animal const &rhs); // canonical

	std::string getType() const;
	virtual void makeSound() const; // mot cle virtual permet de dire que cette methode peut etre redefinie dans une classe derivee
};
