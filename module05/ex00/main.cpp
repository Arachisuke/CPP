/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:55:07 by macos             #+#    #+#             */
/*   Updated: 2025/05/12 16:39:32 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a;
    Bureaucrat c("jean", 1);


    std::cout << a << std::endl;
    std::cout << c << std::endl;

        try
        {
            c.decrGrade();
        }
        catch(const std::exception& e) 
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            a.incrGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
}
// si dans decrgrade ca lance une exception
 // throw 'name_fonction' -> return une chaine, alors catch capture ce qui a ete lance et l'utilise via what qui a ete herite et redefini par moi via virtual.
 // du coup si ca throw, je redefini une fonction qui est dans la classe Abstraite exception et via virtual je redefini la fonction qui maintenant au lieu de renvoyer basiquement juste une str exception la elle renvoie ce que je veux
 // car je l'ai redefini dans le .cpp
 