/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:43:28 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/19 15:47:33 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "repertory.hpp"

class Contact
{
public:
    Contact();
    ~Contact();
    void setName(str first_name);
    void setLast(str last_name);
    void setNick(str nickame);
    void setPhone(str phone_number);
    void setSecret(str darkest_secret);

    str getLast() const;
    str getName() const;
    str getNick() const;
    str getPhone() const;
    str getSecret() const;

private:
    str first_name;
    str last_name;
    str nickame;
    str darkest_secret;
    str phone_number;
};

#endif