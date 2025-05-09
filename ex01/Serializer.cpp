/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:09:58 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 13:15:17 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer()
{
	std::cout << "A Serializer spawned!" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
	(void) obj;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "A Serializer despawned!" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
