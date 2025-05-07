/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:40:59 by wzeraig           #+#    #+#             */
/*   Updated: 2025/05/07 14:23:19 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
class Brain
{

public:
    std::string _ideas[100];
    
    Brain();
    Brain(Brain const &src);
    ~Brain();

    Brain &operator=(Brain const &rhs);

    void setIdea(int index, const std::string  &idea);
        std::string getIdea(int index);

    
};