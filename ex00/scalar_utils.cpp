/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:07:30 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/08 23:38:22 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

void displayInf(const std::string &str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!str.compare(0, 4, "-inf"))
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (!str.compare(0, 4, "+inf"))
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

t_type getType(const std::string &str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return (CHAR);
	else if (str[str.length() - 1] == 'f')
		return (FLOAT);
	else if (str.find('.', 0) != std::string::npos)
		return (DOUBLE);
	return (INT);
}

bool isWhitelist(const std::string &str)
{
	return (!str.compare("nan") || !str.compare("nanf") || !str.compare("-inf") || !str.compare("+inf") || !str.compare("-inff") || !str.compare("+inff"));
}

bool strAtodable(const std::string &str)
{
	int	point_count = 0;
	int	i = 0;

	while (std::isspace(str[i]) || str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (point_count == 1 || i == 0 || !std::isdigit(str[i - 1]))
				return (false);
			point_count++;
		}
		else if (!std::isdigit(str[i]) && !(i && i + 1 == (int)str.length() && str[i] == 'f' && isdigit(str[i - 1])))
			return (false);
		i++;
	}
	return (true);
}
