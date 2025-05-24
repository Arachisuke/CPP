/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:12:59 by macos             #+#    #+#             */
/*   Updated: 2025/05/24 16:32:42 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void multipliParDeux(T &i)
{
    i = i - 1;
}

int main(void)
{
    int array[] = {2, 3, 4, 5, 6};
    iter(array, 5, &multipliParDeux);

    for (int i = 0; i < 5; i++)
        std::cout << "array : " << array[i] << std::endl;


    char array1[] = "bonjour";
    iter(array1, 7, &multipliParDeux);

    for (int i = 0; i < 7; i++)
        std::cout << "array1 : " << array1[i] << std::endl;
}