/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:10:11 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/18 19:10:34 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	std::string	getType(void);
	void		setType(std::string type);
};
