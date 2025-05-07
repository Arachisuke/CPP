/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:09:50 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 16:11:09 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat const &src);
    ~WrongCat();

    WrongCat &operator=(WrongCat const &rhs);

    void makeSound() const;
};
