/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:27:05 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/18 15:59:00 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//define
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define FAIL		1

//colors
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"

class Harl {
	public : 
	Harl();
	~Harl();

	//public_method
	void complain(std::string level);

	private : 

	//pointeur sur fonctionmembre privé
    void (Harl::*_method_tab[4])(void); 
	
	//method
	void debug (void);
	void info (void);
	void warning (void);
	void error (void);
};