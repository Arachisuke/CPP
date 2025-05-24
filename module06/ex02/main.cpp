/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:23:57 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 16:23:58 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		std::srand(std::time(NULL) + std::clock());

		//identify pointer
		Base *object = generate();
		identify(object);

		//identify reference
		identify(*object);

		std::cout << "-----------------------" << std::endl;
		delete(object);
	}
	return (0);
}