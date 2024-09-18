/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:40:50 by lscarcel          #+#    #+#             */
/*   Updated: 2024/09/18 13:48:03 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//libs
#include <iostream>
#include <fstream>
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


int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::string line;
		std::string s1 = av[2];
		std::string s2 = av[3];

		if(s1.empty() == TRUE || s2.empty() == TRUE)
		{	
			std::cout << RED << "how can i replace something with nothing ?!" << RESET << std::endl;
			return 1;
		}
		
		std::ifstream folder("original"); //open folder in read mode;
		
		if(folder.is_open() == FALSE)
		{	
			std::cout << RED << "I CANT OPEN THE FILE." << std::endl;
			return 1;
		}
		
		if (folder.peek() == std::ifstream::traits_type::eof()) //check if the file is empty
		{
        	std::cout << RED << "HA!" << RESET << " THE FOLDER IS EMPTY." << std::endl;
			folder.close();
			return 1;
		}
		
		std::ofstream replace_folder("original.replace"); //open folder in write mode;
		
		if(folder.is_open() == FALSE)
		{	
			std::cout << RED << "I CANT OPEN THE FILE." << std::endl;
			folder.close();
			return 1;
		}
    	while (std::getline(folder, line))
		{ 
			size_t pos = 0;
			
    	    while ((pos = line.find(s1, pos)) != std::string::npos)
			{
    	        line.erase(pos, s1.length()); 
    	        line.insert(pos, s2);      
    	        pos += s2.length();           // Avancer la position après l'insertion
    	    }
    	    replace_folder << line << std::endl;
    	}
		folder.close();
		replace_folder.close();
	}
	else
	std::cout << RED << "wrong buzzer noise " << RESET << "wrong argument !" << std::endl;
}