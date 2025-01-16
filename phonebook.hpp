/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:31:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/16 13:21:13 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK.H
#define PHONEBOOK .H

#include <iostream>
#include <cstdlib>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void add_contact();
    void search_contact();

private:
    const int max_contacts;
    int current_nb;
    int nb_contacts;
    Contact array[8];
};

#endif