#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <exception>
#include <iomanip>

class Bureaucrat
{

	
		private:
			std::string const name;
			int grade;
	public:
		Bureaucrat();
		Bureaucrat(std:: string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
        std:: string getName();
        int getGrade();
		void incrGrade();
		void decrGrade();
		
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


