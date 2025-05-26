/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:35:37 by macos             #+#    #+#             */
/*   Updated: 2025/05/25 13:35:39 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        std::stack<T, Container>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    // Itérateurs non-const et const
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end()   { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end()   const { return this->c.end(); }
};

// "c" c le container sous jacent proteger par stack .
