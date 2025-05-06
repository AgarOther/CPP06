/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:30:16 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/07 00:37:16 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter()
{
	std::cout << "A ScalarConverter spawned!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "A ScalarConverter despawned!" << std::endl;
}

void ScalarConverter::convert(const std::string &type)
{
	
}
