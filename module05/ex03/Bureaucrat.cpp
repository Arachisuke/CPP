/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:57:59 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:31:05 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std:: string name, int grade) : _name(name), _grade(grade)
{
        if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
        if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    std::cout << "Bureaucrat :: Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Bureaucrat :: Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat :: Copy Constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat :: Destructor called" << std::endl;
}

std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrGrade(){
    this->_grade++;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrGrade(){
    this->_grade--;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() // throw cette fonction ne lance aucune exception
{
    return("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

void    Bureaucrat::signForm(AForm &form){
    try{
        form.beSigned(*this);
        std::cout  << this->getName() << " signed the " << form.getName() << " big boy sign the " << form.getName()  << std::endl;
    }
    catch (AForm::GradeTooLowException &e){
        std::cout<< this->getName() << " couldn't sign " << form.getName() << " because his grade is " << this->getGrade() << " -> " << e.what() << " : " << " while we need a Bureaucrat of rank " << form.getGradeReq()  << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    std::cout << "Bureaucrat Assignation operator overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_grade = rhs._grade;
    return *this;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &operator<<(std::ostream &o, Bureaucrat &i ){
    o << "Bureaucrat named \"" << i.getName() << "\" current grade is " << i.getGrade() << std::endl;
    return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void    Bureaucrat::executeForm(const AForm  &form){
    try{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << " form."  << std::endl;
    }
    catch (std::exception &e){
        std::cerr  << getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */