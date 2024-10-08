/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:04 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/17 16:23:26 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
	private:
	std::string _name;
	Weapon* 	_weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	
	//method
	void attack();

	//setter
	void setWeapon(Weapon& weapon);
};
