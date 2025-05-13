/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:55:07 by macos             #+#    #+#             */
/*   Updated: 2025/05/13 17:14:56 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat c("jean", 130);
    Bureaucrat d("gabin", 120);
    Form a("contract", 120, 50);

    std::cout << "de base il est pas signer ouuu" <<  a.getSigned() << std::endl;
    c.signForm(a); // sign catch ca !!
    std::cout << "C apres avoir echoue   " << a.getSigned() << std::endl;
    d.signForm(a);
    std::cout <<"D apres avoir sign   "  << a.getSigned() << std::endl;

    std::cout << a;
    
    // std::cout << a.getSigned();
    // a.beSigned(d);
    // std::cout << a.getSigned();

        // try
        // {
        //     c.decrGrade();
        // }
        // catch(const std::exception& e)
        // {
        //     std::cerr << e.what() << '\n';
        // }
        // try
        // {
        //    /// a.incrGrade();
        // }
        // catch(const std::exception& e)
        // {
        //     std::cerr << e.what() << '\n';
        // }
        
}

// ya un grade pour executer le format
// ya un grade pour le signer.
// signform de bureaucrat utilise le be.signed de form et sil renvoie un throw bureaucrat le catch.

// enfaite besigned c'est pour signer ?
// et form.signed cest pour signer et affiche si ca signe.
// besigned lance et signform catch.