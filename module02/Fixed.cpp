#include "Fixed.hpp"

const int _nbBits = 8;

Fixed::Fixed() : _valueFixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	// TODO: insert return statement here
}

int Fixed::getRawBits(void) const
{
	return (0);
}

void Fixed::setRawBits(int const raw)
{
}
