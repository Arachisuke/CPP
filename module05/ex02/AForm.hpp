/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:58:05 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:09:38 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;


class AForm
{

	public:

		AForm();
		AForm( AForm const & src );
		AForm(std::string const name, int const _signGrade, int const _execGrad);
		~AForm();

		AForm &		operator=( AForm const & rhs );
        bool beSigned(Bureaucrat &bureaucrat);
        const std::string getName(void) const;
        bool getSigned(void) const;
        int getGradeReq(void) const;
        int getExecGrade(void) const;
        virtual void        execute(Bureaucrat const &executor) const = 0;

         // Exceptions //
		class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
                
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class FormNotSignedException : public std::exception{
                public:
                    virtual const char *what() const throw();
            };
	private:
        const std::string _name;
        bool _signed;
        const int _execGrade;
        const int _gradeReq;

};

std::ostream &			operator<<( std::ostream & o, AForm  & i );

#endif /* ************************************************************ FORM_H */