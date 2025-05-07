/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:56 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:12:33 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound() const;
	void setIdea(int index,const std::string  &idea);
	std::string  getIdea(int index)const;

private:
	Brain *_brain;
};