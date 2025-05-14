/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:55:07 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:33:29 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


#include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";
const std::string INVERSE = "\033[7m";



int main() {
    try {
        std::cout << BOLD << MAGENTA << "===== Création des Bureaucrates =====" << RESET << std::endl << std::endl;
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 5);
        Bureaucrat noobBur("Noob", 142);
        
        std::cout << bob << std::endl;
        std::cout << alice << std::endl;
        std::cout << noobBur << std::endl;
        
        std::cout << BOLD << MAGENTA << "===== Création des Formulaires =====" << RESET << std::endl << std::endl;
        ShrubberyCreationForm shrubForm("ShrubForm");
        RobotomyRequestForm roboForm("RobForm");
        PresidentialPardonForm pardonForm("PresForm");
        PresidentialPardonForm noobPardonForm("noobPresForm");
        
        std::cout << shrubForm << std::endl;
        std::cout << roboForm << std::endl;
        std::cout << pardonForm << std::endl;
        std::cout << noobPardonForm << std::endl;
        
        std::cout << BOLD << MAGENTA << "===== Test Signature =====" << RESET << std::endl << std::endl;
        bob.signForm(shrubForm);
        std::cout << shrubForm << std::endl;
        alice.signForm(pardonForm);
        std::cout << pardonForm << std::endl;
        alice.signForm(roboForm);
        std::cout << roboForm << std::endl;
        noobBur.signForm(noobPardonForm);
        std::cout << noobPardonForm << std::endl;
        // try {
        //     alice.signForm(roboForm);
        // } catch (const std::exception &e) {
        //     std::cerr << "Erreur lors du test Robotomy : " << e.what() << std::endl;
        // }
        std::cout << BOLD << MAGENTA << "===== Test Exécution =====" << RESET << std::endl << std::endl;
        bob.executeForm(shrubForm);
        alice.executeForm(pardonForm);
        noobBur.executeForm(shrubForm);
        
        
        std::cout << BOLD << MAGENTA << "===== Test Robotomy (50% de chance d'échouer) =====" << RESET << std::endl << std::endl;
        alice.executeForm(roboForm);
    }
    catch (std::exception &e) {
        std::cerr << "Exception attrapée: " << e.what() << std::endl;
    }
    
    return 0;
}

// ya un grade pour executer le format
// ya un grade pour le signer.
// signform de bureaucrat utilise le be.signed de form et sil renvoie un throw bureaucrat le catch.

// enfaite besigned c'est pour signer ?
// et form.signed cest pour signer et affiche si ca signe.
// besigned lance et signform catch.