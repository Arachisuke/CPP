#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdint.h>


typedef struct Data
{
    std::string name;
    int age;
    Data *next;
} Data;


class Serializer
{

	public:
		~Serializer();

		Serializer &		operator=( Serializer const & rhs );
        static uintptr_t serialize(Data* ptr);
        static Data*    deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer( Serializer const & src );
};

std::ostream &			operator<<( std::ostream & o, Serializer const & i );

#endif /* ****************************************************** SERIALIZER_H */