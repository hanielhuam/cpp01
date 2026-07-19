/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:08:52 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/18 19:09:23 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon	&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};
