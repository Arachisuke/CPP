/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:08:38 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:11:56 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAAnimal
{
protected:
    std::string _type;

public:
    WrongAAnimal();
    WrongAAnimal(WrongAAnimal const &src);
    virtual ~WrongAAnimal();

    WrongAAnimal &operator=(WrongAAnimal const &rhs);

    std::string getType() const;
    void makeSound() const; // mot cle virtual permet de dire que cette methode peut etre redefinie dans une classe derivee
};
