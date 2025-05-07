/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:07:39 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 15:09:12 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain: Default constructor called." << std::endl;
    for (int i = 0; i < 100; i++){
        _ideas[i] = "default idea.";
    }
}

Brain::Brain(const Brain& other){
    std::cout << "Brain: Copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other){
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain: Destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string  &idea){
    if (index >= 0 && index < 100)  
        this->_ideas[index] = idea;
    else
        std::cout << "Idea must be in range of [0 - 99] included!" << std::endl;
}

std::string Brain::getIdea(int index){
    if (index >= 0 && index < 100)  
        return this->_ideas[index];
    else
        return "Idea must be in range of [0 - 99] included!";
}