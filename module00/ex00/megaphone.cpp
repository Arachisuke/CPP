/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:02:17 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/16 11:02:22 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define DEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc < 2)
        std::cout << DEFAULT;
    else
    {
        std::string     str;
    while(argc > i)
    {
        str.append(argv[i]);
        i++;
    }
    std::string::iterator i = str.begin();   
    while(i != str.end())
    {
        if (i != str.end())
            std::cout << (char) toupper(*i);
        ++i;
    }
    }
    std::cout << std::endl;
    return(0);

}
