/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:57:31 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:10:47 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _name("Empty"), _signed(false), _execGrade(0), _gradeReq(0){
	std::cout << "Form :: Constructor called" << std::endl;

}

AForm::~AForm(){
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _execGrade(execGrade), _gradeReq(signGrade)
{	
	if (signGrade < 1 || execGrade < 1){
		throw (AForm::GradeTooHighException());
	}
	else if (signGrade > 150 || execGrade > 150){
		throw (AForm::GradeTooLowException());
	}
	std::cout << "Form :: Constructor called" << std::endl;

}

AForm::AForm(AForm const &src) : _name(src.getName()), _signed(false), _execGrade(src.getExecGrade()),  _gradeReq(src.getGradeReq())
{
	std::cout << "Form :: Copy Constructor called" << std::endl;
	*this = src;
}

AForm	&AForm::operator=(AForm const &rhs) 
{
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return *this;
}

bool	AForm::beSigned(Bureaucrat &bureaucrat) // si le burreaucrat a le grade requis.. du coup signGrade...le deuxieme param
{
	if (bureaucrat.getGrade() <= this->_gradeReq) 
	{
		_signed = true;
		return (true);
	}
	else 
	{
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooLowException::what(void) const throw(){
	return ("Grade is too low");
}

const char *AForm::GradeTooHighException::what(void) const throw(){
	return ("Grade is too high");
}

const char *AForm::FormNotSignedException::what(void) const throw(){
	return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &o, AForm &Form)
{
	o << std::endl;
	o << "----------------------------------------" << std::endl;
	o << "Form name: " << Form.getName() << std::endl;
	if (Form.getSigned())
		o  << "Is Signed: True"  << std::endl;
	else
		o  << "Is Signed: False"  << std::endl;
	o << "Required Grade to sign AForm: " << Form.getGradeReq() << std::endl;
	o << "Required Grade to execute AForm: " << Form.getExecGrade() << std::endl;
	o << "----------------------------------------" << std::endl;
	o << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	AForm::getName() const 
{
	return _name;
}

bool	AForm::getSigned() const 
{
		return _signed;
}

int	AForm::getGradeReq() const 
{
	return _gradeReq;
}

int	AForm::getExecGrade() const 
{
	return _execGrade;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */