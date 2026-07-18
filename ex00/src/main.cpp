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
	Zombie	mainz("main");
	Zombie	*newz;

	newz = newZombie("new");
	mainz.anounce();
	newz->anounce();
	randonChump("randon");
	delete newz;
	return (0);
}