/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:43:28 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/16 11:07:36 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
    public :
    void setName(str name);
    void setLast(str name);
    void setNick(str name);
    void setPhone(str name);
    void setSecret(str name);
    
    str getLast(str name) const;
    str getName(str name) const;
    str getNick(str name) const;
    str getPhone(str name) const;
    str getSecret(str name) const;
    




    private  :
    str *first_name;
    str *last_name;
    str *nickame;
    str *darkest_secret;
    int phone_number;
    int index;
};

#endif