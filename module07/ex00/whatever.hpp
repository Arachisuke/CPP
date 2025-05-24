/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:55:17 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 17:06:23 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


template<typename T>
void swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const& min(T const& a, T const& b){
	return (a < b ? a : b);
}

template<typename T>
T const& max(T const& a, T const& b){
	return (a > b ? a : b);
}
