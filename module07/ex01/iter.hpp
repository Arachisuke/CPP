/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:07:39 by macos             #+#    #+#             */
/*   Updated: 2025/05/24 15:30:33 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


template <typename T>
void iter(T *array, int length, void (*function)(T &))
{
    for (int i = -1; i < length; i++)
        function(array[i]);
}