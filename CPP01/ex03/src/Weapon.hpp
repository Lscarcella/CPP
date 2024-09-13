/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:09:21 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 14:49:17 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
	private:
	std::string type;
	
	public:
	Weapon(/* args */);
	~Weapon();

	//getter
	const type& getType() const;

	//setter
	void setType();
	
};


