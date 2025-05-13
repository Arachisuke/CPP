/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:58:05 by macos             #+#    #+#             */
/*   Updated: 2025/05/13 17:13:52 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string const name, int const _signGrade, int const _execGrad);
		~Form();

		Form &		operator=( Form const & rhs );
        bool beSigned(Bureaucrat &bureaucrat);
        const std::string getName(void) const;
        bool getSigned(void) const;
        int getGradeReq(void) const;
        int getExecGrade(void) const;

         // Exceptions //
		class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
                
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

		

	private:
        const std::string _name;
        bool _signed;
        const int _execGrade;
        const int _gradeReq;

};

std::ostream &			operator<<( std::ostream & o, Form  & i );

#endif /* ************************************************************ FORM_H */