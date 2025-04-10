/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:31:42 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/10 18:58:26 by macos            ###   ########.fr       */
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
    const int max_contacts; // 8
    int current_nb; // index pour me situer dans l'annuaire
    int nb_contacts; // numero du contact
    Contact array[8]; // nombre de class contact.
};

#endif