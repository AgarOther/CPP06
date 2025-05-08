/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:30:33 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/08 23:28:25 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <string>

typedef enum s_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
}			t_type;

class ScalarConverter
{
	public:
		static void convert(const std::string &input);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
};

void displayInf(const std::string &str);
t_type getType(const std::string &str);
bool strAtodable(const std::string &str);
bool isWhitelist(const std::string &str);

#endif