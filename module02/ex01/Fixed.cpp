/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:47:44 by macos             #+#    #+#             */
/*   Updated: 2025/05/01 17:28:40 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nbBits = 8;

Fixed::Fixed() : _valueFixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const inttoFixed)
{
	std::cout << "Int constructor called" << std::endl;
	this->_valueFixed = inttoFixed * (1 << _nbBits);
}

Fixed::Fixed(float const floattoFixed)
{
	std::cout << "Float constructor called" << std::endl;
	this->_valueFixed = roundf(floattoFixed * (1 << _nbBits));
}

int	Fixed::getRawBits() const
{
	return (this->_valueFixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_valueFixed = raw;
}
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

float	Fixed::toFloat() const
{
	return static_cast<float>(this->_valueFixed) / (1 << _nbBits);
}

int	Fixed::toInt() const
{
	return this->_valueFixed / (1 << _nbBits);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this-> _valueFixed = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}