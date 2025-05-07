/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:52:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:08:05 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();				  
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();		   

	AAnimal &operator=(AAnimal const &rhs); 

	std::string getType() const;
	virtual void makeSound() const = 0;
};
