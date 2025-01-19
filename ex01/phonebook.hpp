/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:31:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/01/19 15:33:57 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "repertory.hpp"

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