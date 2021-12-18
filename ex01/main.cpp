/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:46:55 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 20:53:04 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdio>
#include <cstdlib>
#include <stdint.h>

#define TAB_SIZE 8

int main(void) {
	int tab[TAB_SIZE] = {'A', 'n', 't', 'o', 'i', 'n', 'e', '\n'};

	iter<int>(tab, TAB_SIZE, putchar);
	return (EXIT_SUCCESS);
}
