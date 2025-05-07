/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:56:16 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 13:07:35 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const &src);
    ~Dog();

    Dog &operator=(Dog const &rhs);

    void makeSound() const;
};
