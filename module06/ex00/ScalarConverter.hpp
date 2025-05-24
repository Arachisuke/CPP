#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <cerrno>
#include <climits>
#include <cfloat>
#include <cmath>


class ScalarConverter
{

private:
        ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter	&operator=(const ScalarConverter &rhs);

		~ScalarConverter();

    public:
		static void convert(std::string literal);
		

		//utils
		static bool isInteger(const std::string &literal);
		static bool isFloat(const std::string &literal);
		static bool isDouble(const std::string &literal);

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */