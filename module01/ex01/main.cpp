/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:46:45 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 15:37:35 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(8, "gogo");
    for (int i = 0; i < 8; i++)
        horde[i].announce();
    for (int i = 0; i < 8; i++)
    delete[] horde;
}