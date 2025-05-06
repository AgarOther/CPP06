/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:30:33 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/07 00:36:11 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <string>

class ScalarConverter
{
	public:
		static void convert(const std::string &type);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
};

#endif