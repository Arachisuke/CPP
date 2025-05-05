/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:46:39 by macos             #+#    #+#             */
/*   Updated: 2025/05/01 17:29:04 by macos            ###   ########.fr       */
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
		
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);