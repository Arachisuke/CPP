/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:58:25 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 16:04:37 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serializer::Serializer()
{
		std::cout << "Serializer Default Constructor called" << std::endl;

}

Serializer::Serializer( const Serializer & src )
{
		std::cout << "Serializer Copy Constructor called" << std::endl;
		*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serializer::~Serializer()
{
		std::cout << "Serializer Deconstructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serializer &				Serializer::operator=( Serializer const & rhs )
{
		std::cout << "Serializer Assignation operator called" << std::endl;

		if (this == &rhs)
			return *this;

			
		return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */