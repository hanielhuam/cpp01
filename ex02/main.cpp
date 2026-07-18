/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:28:26 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/17 20:28:28 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;

	std::cout << &str << std::endl;
	std::cout << strptr << std::endl;
	std::cout << &strref << std::endl;
	std::cout << str << std::endl;
	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
	return (0);
}