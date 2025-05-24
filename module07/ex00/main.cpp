/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:55:55 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 17:32:12 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main(void)
// {
//     int a = 42;
//     int b = 21;
    
//     std::cout << "qui est le plus petit entre a et b ?   :" <<  min<int>(a, b) << std::endl;
//     std::cout << "qui est le plus grand entre a et b ?   :" <<  max<int>(a, b) << std::endl;
//     std::cout << "before swap a : " << a << "|  b : "  << b << std::endl;
//     swap<int>(a, b);
//     std::cout << "after swap a : " << a << "|  b : "  << b << std::endl;

//     float c = 42.22;
//     float d = 21.11;
//     std::cout << "qui est le plus petit entre c et d ?   :" <<  min<float>(c, d) << std::endl;
//     std::cout << "qui est le plus grand entre c et d ?   :" <<  max<float>(c, d) << std::endl;
//     std::cout << "before swap c : " << c << "|  d : " << d << std::endl;
//     swap<float>(c, d);
//     std::cout <<"after swap c : " << c << "|  d : "  << d << std::endl;

//     char e = '{';
//     char f = '_';
//     std::cout << "qui est le plus petit entre e et f ?   :" <<  min<char>(e, f) << std::endl;
//     std::cout << "qui est le plus grand entre e et f ?   :" <<  max<char>(e, f) << std::endl;
//     std::cout << "before swap e : " << e << "|  f : " << f << std::endl;
//     swap<char>(e, f);
//     std::cout << "after swap e : " << e << "|  f : " << f << std::endl;
   
// }


int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}