/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:46:45 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 11:47:14 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *newZ = newZombie("heapZzombie");
    newZ->announce();
    randomChump("StackZzzzombie");
    delete (newZ);
}