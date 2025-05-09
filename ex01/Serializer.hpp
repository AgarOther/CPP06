/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:10:08 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 13:27:55 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <stdint.h>

typedef struct s_data
{
	void *content;
}				Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &obj);
		~Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif