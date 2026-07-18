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

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*mainz;
	int		n;

	n = 5;
	mainz = zombieHorde(n, "Haniel");
	for (int i = 0; i < n; i++)
		mainz[i].anounce();
	delete[] mainz;
	return (0);
}