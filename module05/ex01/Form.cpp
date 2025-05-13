/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:57:31 by macos             #+#    #+#             */
/*   Updated: 2025/05/13 17:14:33 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _name("Empty"), _signed(false), _execGrade(0), _gradeReq(0){
	std::cout << "Form :: Constructor called" << std::endl;

}

Form::~Form(){
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _execGrade(execGrade), _gradeReq(signGrade)
{	
	if (signGrade < 1 || execGrade < 1){
		throw (Form::GradeTooHighException());
	}
	else if (signGrade > 150 || execGrade > 150){
		throw (Form::GradeTooLowException());
	}
	std::cout << "Form :: Constructor called" << std::endl;

}

Form::Form(Form const &src) : _name(src.getName()), _signed(false), _execGrade(src.getExecGrade()),  _gradeReq(src.getGradeReq())
{
	std::cout << "Form :: Copy Constructor called" << std::endl;
	*this = src;
}

Form	&Form::operator=(Form const &rhs) 
{
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return *this;
}

bool	Form::beSigned(Bureaucrat &bureaucrat) // si le burreaucrat a le grade requis.. du coup signGrade...le deuxieme param
{
	if (bureaucrat.getGrade() <= this->_gradeReq) 
	{
		_signed = true;
		return (true);
	}
	else 
	{
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what(void) const throw(){
	return ("Grade is too high");
}

std::ostream	&operator<<(std::ostream &o, Form &Form)
{
	o << std::endl;
	o << "----------------------------------------" << std::endl;
	o << "Form name: " << Form.getName() << std::endl;
	if (Form.getSigned())
		o  << "Is Signed: True"  << std::endl;
	else
		o  << "Is Signed: False"  << std::endl;
	o << "Required Grade to sign Form: " << Form.getGradeReq() << std::endl;
	o << "Required Grade to execute Form: " << Form.getExecGrade() << std::endl;
	o << "----------------------------------------" << std::endl;
	o << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	Form::getName() const 
{
	return _name;
}

bool	Form::getSigned() const 
{
		return _signed;
}

int	Form::getGradeReq() const 
{
	return _gradeReq;
}

int	Form::getExecGrade() const 
{
	return _execGrade;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */