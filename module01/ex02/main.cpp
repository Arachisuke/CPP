/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:26:17 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 15:43:58 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de str        :" << &str << std::endl;
    std::cout << "Adresse via stringPTR :" << stringPTR << std::endl;
    std::cout << "Adresse via stringREF :" << &stringREF << std::endl;

    std::cout << "Valeur de str        :" << str << std::endl;
    std::cout << "Valeur via stringPTR :" << *stringPTR << std::endl;
    std::cout << "Valeur via stringREF :" << stringREF << std::endl;

    return 0;
}
