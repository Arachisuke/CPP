/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:57:20 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:30:45 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(){
    //std::cout << "Robotomy: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm::AForm("Robotomy", 72, 45){
    this->_target = name;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm::AForm("Robotomy", 72, 45){
    //std::cout << "Robotomy: Copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    //std::cout << "Robotomy: Default destructor called" << std::endl;
}


RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
    if (this != &rhs)
        _target = rhs._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    std::srand(std::time(0)); //setting rand generator on actual time
    // if (!getIsAFormSigned()){
    //     throw AForm::GradeTooLowException();
    // }
    try {
        getSigned();
    }
    catch (std::exception &e) {
        //std::cerr << "DEBUG" << e.what() << std::endl;
        throw AForm::FormNotSignedException();
    }
    if (this->getExecGrade() < executor.getGrade()){
        throw AForm::GradeTooLowException();
    }
    if (std::rand() % 2 == 0){
        std::cout  << _target << " robotomized succesfully!"  << std::endl; 
    }
    else {
        std::cout  << "Failed to robotomize " << _target << " !"  << std::endl;
    }
}