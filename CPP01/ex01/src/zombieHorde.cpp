/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:48:23 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/13 12:26:44 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie* alliance = new Zombie[N];	// Alloue N zombies d'un coup.

	for (int i = 0; i < N; i++)			// Itère N fois pour set le nom de chaque zombie.
		alliance[i].setName(name);
	
	return(alliance);					// retourne un pointeur sur le premier zombie.
}