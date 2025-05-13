#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std:: string name, int grade) : name(name), grade(grade)
{
        if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
        if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    std::cout << "Bureaucrat :: Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    std::cout << "Bureaucrat :: Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade)
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
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

void Bureaucrat::incrGrade()
{
    this->grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
 }

void Bureaucrat::decrGrade()
{
    this->grade--;
    if (grade < 1)
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

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    std::cout << "Bureaucrat Assignation operator overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->grade = rhs.grade;
    return *this;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &operator<<( std::ostream &o, Bureaucrat &i )
{
	o << i.getName() <<  ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */