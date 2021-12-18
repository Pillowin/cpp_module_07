/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:46:27 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 22:02:22 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <iostream>
#include <stdint.h>

int main(void) {
	Array<int> empty;
	std::cout << "Empty Tab as a size of " << empty.get_size() << std::endl;

	std::cout << std::endl;

	Array<int> tab(5);
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;

	std::cout << "Tab as a size of " << tab.get_size() << std::endl;

	for (uint8_t i = 0; i < tab.get_size(); i++)
		std::cout << tab[i] << std::endl;
	std::cout << std::endl;

	// Testing assignation
	Array<int> tab_assign = tab;
	std::cout << "Tab Assign as a size of " << tab_assign.get_size()
			  << std::endl;
	for (uint8_t i = 0; i < tab_assign.get_size(); i++)
		std::cout << tab_assign[i] << std::endl;
	std::cout << std::endl;

	// Testing copy
	Array<int> tab_cpy(tab);
	std::cout << "Tab Copy as a size of " << tab_cpy.get_size() << std::endl;
	for (uint8_t i = 0; i < tab_cpy.get_size(); i++)
		std::cout << tab_cpy[i] << std::endl;
	std::cout << std::endl;

	// Testing out of range
	try {
		std::cout << "3rd element of tab is : " << tab[2] << std::endl;
		std::cout << "10th element of tab is : " << tab[9] << std::endl;
	} catch (std::exception const& e) { std::cerr << e.what() << std::endl; }
	return (EXIT_SUCCESS);
}
