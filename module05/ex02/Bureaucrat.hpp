/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:58:17 by macos             #+#    #+#             */
/*   Updated: 2025/05/14 17:29:39 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <exception>
#include <iomanip>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{

	
		private:
			std::string const _name;
			int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std:: string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();


		// getter & fonction //
        std:: string getName();
        int getGrade() const;
		void incrGrade();
		void decrGrade();
		void signForm(AForm &form);
		void    executeForm(AForm const &form);

		
		class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
                
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

		Bureaucrat &		operator=( Bureaucrat const & rhs );

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat & i );

#endif /* ****************************************************** BUREAUCRAT_H */



// je dois implementer les fonctions.
// ecrire ici les deux fonctions d'exceptions. @@@@


// comprendre la ligne de throw et what ou pas what aucune idee, et ensuite continuer a implementer les fonctions . @@@
// apres lire pour comprendre 
// tester avec un main, ensuite verifier ce que t'as fais.


