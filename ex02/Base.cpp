/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:34:16 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 14:05:32 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base::Base() {}

Base::~Base() {}

static int getRandomValue()
{
	return (rand() % 3);
}

Base *Base::generate()
{
	srand(std::time(NULL));
	switch (getRandomValue())
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void Base::identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << CYAN << "Pointer is of type A!" << RESET << std::endl;
	else if (b)
		std::cout << CYAN << "Pointer is of type B!" << RESET << std::endl;
	else if (c)
		std::cout << CYAN << "Pointer is of type C!" << RESET << std::endl;
	else
		std::cerr << RED << "Pointer is of no known types." << RESET << std::endl;
}

void Base::identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << MAGENTA << "Reference is of type A!" << RESET << std::endl;
		(void) a;
		return;
	}
	catch (const std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << MAGENTA << "Reference is of type B!" << RESET << std::endl;
		(void) b;
		return;
	}
	catch (const std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << MAGENTA << "Reference is of type C!" << RESET << std::endl;
		(void) c;
		return;
	}
	catch (const std::exception &e) {}
	std::cerr << RED << "Reference is of no known types." << RESET << std::endl;
}
