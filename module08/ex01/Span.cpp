/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:28:47 by macos             #+#    #+#             */
/*   Updated: 2025/05/24 19:54:46 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
    : _N(N), _numbers() {}

Span::Span(const Span& other)
    : _N(other._N), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _N = other._N;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_numbers.size() >= _N) {
        throw std::out_of_range("Span is full");
    }
    _numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw std::length_error("Not enough numbers to find a span");
    }
    std::vector<int> sorted(_numbers);
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); ++i) {
        int span = sorted[i] - sorted[i - 1];
        if (span < min) {
            min = span;
        }
    }
    return min;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2) {
        throw std::length_error("Not enough numbers to find a span");
    }
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}