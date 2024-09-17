/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:10 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/17 16:29:12 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA {
	
	private:
	std::string _name;
	Weapon& 	_weapon;
	
	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	//method
	void attack();
};

