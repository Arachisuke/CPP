/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:02:30 by macos             #+#    #+#             */
/*   Updated: 2025/05/18 16:02:39 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void){
    Data* data = new Data;

    data->name = "testname";
    data->age = 42;
    
    std::cout << "data name: " << data->name << std::endl;
    std::cout << "data age: " << data->age << std::endl;

    std::cout << "data serialized: " << Serializer::serialize(data) << std::endl;

    std::cout << "data name: " << data->name << std::endl;
    std::cout << "data age: " << data->age << std::endl;

    std::cout << "data deserialized: " << Serializer::deserialize(Serializer::serialize(data)) << std::endl;

    std::cout << "data name: " << data->name << std::endl;
    std::cout << "data age: " << data->age << std::endl;
}