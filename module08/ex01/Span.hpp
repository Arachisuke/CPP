/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:04:10 by macos             #+#    #+#             */
/*   Updated: 2025/05/24 20:03:52 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

class Span
{
    public :
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &rhs);
        ~Span();
        void addNumber(int N);

        template<typename it>
        void addNumber(it begin, it end) {
        typename std::iterator_traits<it>::difference_type dist = std::distance(begin, end);
        if (_numbers.size() + dist > _N) {
            throw std::out_of_range("Span is full");
        }
        _numbers.insert(_numbers.end(), begin, end);
    }
        int shortestSpan() const;
        int longestSpan() const;
    private :
        unsigned int _N;
        std::vector<int> _numbers;
};