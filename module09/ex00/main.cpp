#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib> 

bool isValidDate(const std::string& date) {
    if (date.size() != 10 ||
        date[4] != '-' || date[7] != '-' ||
        !isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) ||
        !isdigit(date[5]) || !isdigit(date[6]) ||
        !isdigit(date[8]) || !isdigit(date[9]))
        return false;
    if (date[5] > '1' || (date[5] == '1' && date[6] >= '3'))
        return false;
    if (date[8] > '3' || (date[8] == '3' && date[9] >= '2')) 
        return false; 
    if (date[6] < '8' && date[6] % 2 == '0' && date[8] == '3' && date[9] >= '1') 
        return false;
    if (date[6] >= '8' && date[6] % 2 != '0' && date[8] == '3' && date[9] >= '1') 
        return false;
    if ((date[5] == '0' && date[6] == '2' && date[3] % 2 != '0' && date[8] > '2') || (date[8] >= '2' && date[9] == '9')) 
        return false;
    return true;
}
int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange btc;
    try {
        btc.loadDatabase("data.csv");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::ifstream input(argv[1]);
    if (!input.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::string line;
    std::getline(input, line); 
    while (std::getline(input, line)) {
        std::istringstream iss(line);
        std::string date, valueStr;
        if (!std::getline(iss, date, '|') || !std::getline(iss, valueStr)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        for (size_t i = 0; i < date.size(); ++i)
            if (date[i] == ' ')
                date.erase(i, 1);
        for (size_t i = 0; i < valueStr.size(); ++i)
            if (valueStr[i] == ' ')
                valueStr.erase(i, 1);

        if (!isValidDate(date)) {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        double input = atof(valueStr.c_str());
        if (input < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (input > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        try {
            float rate = btc.getRate(date);
            double result = input * rate;
            std::cout << date << " => " << input << " = " << result << std::endl;
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}

