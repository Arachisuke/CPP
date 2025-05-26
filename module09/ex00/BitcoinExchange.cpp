/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:50:20 by macos             #+#    #+#             */
/*   Updated: 2025/05/25 18:56:05 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib> 
#include <iostream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other)
        _data = other._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open database file.");
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date, valueStr;
        if (std::getline(iss, date, ',') && std::getline(iss, valueStr)) {
            float value = static_cast<float>(atof(valueStr.c_str()));
            _data[date] = value;
        }
    }
}

float BitcoinExchange::getRate(const std::string& date) const {
    std::map<std::string, float>::const_iterator it = _data.lower_bound(date);
    if (it != _data.begin() && (it == _data.end() || it->first != date))
        --it;
    if (it != _data.end())
        return it->second;
    throw std::runtime_error("Error: no valid date found in database.");
}





// std::map car cle et valeur.


// ouvrir le csv avec un fd, 
// lire dans ce fd, le stocker dans MAP.

// apres bah on lit l'input on lui donne la valeur indique.
// parsing de la date, parsing de l'input, deja si c'est une date verifie son agencement.
// si c'est un input, verifie si il est negatif
// ensuite aller dans map a la date indique, ensuite tu prend sa clef et tu las multiplie par l'input.
// cas special si la date est depasse prendre la date avant la plus proche.
// si tu va sortir un overflow, ecris sur la sortie standard une erreur d'overflow.
// 24/09/19 -> 2123131 -> overflow.
