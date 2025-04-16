/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:19:56 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/14 15:56:23 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertory.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}
void Contact::setLast(str last)
{
    this->last_name = last;
}

void Contact::setName(str name)
{
    this->first_name = name;
}

void Contact::setNick(str nick)
{
    this->nickame = nick;
}

void Contact::setPhone(str number)
{
    this->phone_number = number;
}

void Contact::setSecret(str Secret)
{
    this->darkest_secret = Secret;
}
str Contact::getLast() const
{
    return (this->last_name);
}

str Contact::getName() const
{
    return (this->first_name);
}

str Contact::getNick() const
{
    return (this->nickame);
}

str Contact::getPhone() const
{
    return (this->phone_number);
}

str Contact::getSecret() const
{
    return (this->darkest_secret);
}