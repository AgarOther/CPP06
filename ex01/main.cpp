/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:10:14 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 13:32:08 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	int	value = 5;
	Data *test = new Data;
	test->content = &value;
	uintptr_t ptrValue = Serializer::serialize(test);
	std::cout << MAGENTA << "Pointer value when serializing once:		" << ptrValue << std::endl;
	std::cout << "Int value's pointer:				" << test->content << ptrValue << RESET << std::endl;
	Data *retrieved = Serializer::deserialize(ptrValue);
	ptrValue = Serializer::serialize(retrieved);
	std::cout << CYAN << "Pointer value when serializing a second time:	" << ptrValue << std::endl;
	std::cout << "Int value's pointer:				" << retrieved->content << ptrValue << RESET << std::endl;
	delete test;
}
