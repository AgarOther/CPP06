/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:33:42 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 14:02:51 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base *base = Base::generate();
	Base &ref = *base;
	Base::identify(base);
	Base::identify(ref);
	delete base;
}
