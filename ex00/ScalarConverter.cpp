/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:30:16 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/08 23:55:22 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "colors.hpp"
#include <iostream>
#include <limits.h>
#include <cstdlib>
#include <cmath>

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

void ScalarConverter::convert(const std::string &input)
{
	if (isWhitelist(input))
		return (displayInf(input));
	if ((!strAtodable(input) && !(!isdigit(input[0]) && input.length() == 1)) || std::atoll(input.c_str()) > INT_MAX || std::atoll(input.c_str()) < INT_MIN)
	{
		std::cout << RED << "Error: Conversion is impossible. Please specify a valid value." << RESET << std::endl;
		return;
	}

	t_type type = getType(input);
	if (type == CHAR)
	{
		const char value = input[0];
		std::cout << "char: '" << value << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
	else if (type == INT)
	{
		const int value = std::atoi(input.c_str());
		if (isascii(value) && isprint(value))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << value << std::endl;
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
	else if (type == FLOAT)
	{
		const float value = std::atof(input.c_str());
		if (isascii(value) && isprint(value))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << value << (ceilf(value) != value ? "f" : ".0f") << std::endl;
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
	else
	{
		const double value = std::atof(input.c_str());
		if (isascii(value) && isprint(value))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
}
