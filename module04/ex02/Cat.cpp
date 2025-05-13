/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:31 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/08 11:51:52 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : _brain(new Brain())
{
    _type = "Cat";

    std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(Cat const &other) : AAnimal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat: Destructor called." << std::endl;
    // delete brain?
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &other)
    {
        AAnimal::operator = (other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MEOOOOOOW I'm a cat." << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}