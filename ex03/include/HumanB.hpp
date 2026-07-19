/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:09:41 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/18 19:09:56 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon	*_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};