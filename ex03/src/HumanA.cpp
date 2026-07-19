/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:04:14 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/18 19:04:39 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}