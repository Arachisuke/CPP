/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:46:39 by macos             #+#    #+#             */
/*   Updated: 2025/04/28 19:46:41 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
	private:
		int					_valueFixed;
		static int const	_nbBits;

	public:
		Fixed();				//canonical default constructor
		Fixed(Fixed const &src); //canonical	copy constructor
		~Fixed();
		Fixed	&operator=(Fixed const &rhs); //canonical = overload
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};