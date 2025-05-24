/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:43:39 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 15:43:49 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string literal = argv[1];
		ScalarConverter::convert(literal);
		return 0;
	}
	std::cerr  << "ONE AND ONLY ONE ARGUMENT NEEDED" << std::endl;
	return 1;
}
