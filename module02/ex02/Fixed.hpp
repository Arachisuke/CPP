/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:46:39 by macos             #+#    #+#             */
/*   Updated: 2025/05/01 17:35:39 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
	private:
		int					_valueFixed;
		static int const	_nbBits;

	public:
		Fixed();				
		Fixed(Fixed const &src); 
		Fixed(int const inttoFixed);
		Fixed(float const floattoFixed);
		~Fixed();
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		
		//++ -- operator overload
		Fixed	&operator++(); //pre incr
		Fixed	&operator--(); //pre decr
		Fixed	operator++(int); //post incr
		Fixed	operator--(int); //post decr
		
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static Fixed const	&min(Fixed const &n1, Fixed const &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static Fixed const	&max(Fixed const &n1, Fixed const &n2);
		
		
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);