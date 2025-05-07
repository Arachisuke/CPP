/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:56:16 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:12:33 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
public:
    Dog();
    Dog(Dog const &src);
    ~Dog();

    Dog &operator=(Dog const &rhs);

    void makeSound() const;
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;

private:
    Brain *_brain;
};
