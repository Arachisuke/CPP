/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:50:23 by wzeraig           #+#    #+#             */
/*   Updated: 2025/04/24 13:58:24 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void replace(char **argv)
{
    std::string line;
    std::string s1;
    std::string s2;
    std::string new_file;
    std::ifstream file(argv[1]);
    size_t pos;
    if (!file.is_open()) 
    {
        std::cerr << "Error open file";
        return;
    }
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cerr << "empty string";
        return;
    }
    new_file = argv[1];
    new_file.append(".replace");
    std::getline(file, line);
    if (line.empty())
    {
        std::cerr << "empty file";
        return;
    }
    std::ofstream newfile(new_file.c_str());
    if (!newfile.is_open())
    {
        std::cerr << "Error create newfile";
        return;
    }
    pos = line.find(s1);
    if (pos != std::string::npos)
    {
        line.erase(pos, s1.size());
        line.insert(pos, s2);
        newfile << line << std::endl;
    }
    else
        newfile << line << std::endl;
    while (std::getline(file, line))
    {
        pos = line.find(s1);
        if (pos != std::string::npos)
        {
            line.erase(pos, s1.size());
            line.insert(pos, s2);
            newfile << line << std::endl;
        }
        else
            newfile << line << std::endl;
    }
    newfile.close();
    file.close();
    std::cout << "finish.";
}

// tester un fichier inexistant
// tester un fichier vide
// tester sans occurence
// tester sans .txt
// tester sans les droits
// tester avec un dossier.