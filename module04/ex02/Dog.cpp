/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:55:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:12:42 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : _brain(new Brain())
{
    _type = "Dog";
    std::cout << "Dog: Default constructor called." << std::endl;
    // rajouter un new brain ?
}

Dog::Dog(Dog const &other) : AAnimal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog: Destructor called." << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF I'm a dog." << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}