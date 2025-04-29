/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:38:59 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/29 15:39:01 by wzeraig          ###   ########.fr       */
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