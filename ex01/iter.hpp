/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:28:26 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 20:52:01 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T* address, std::size_t length, int (*f)(T elem)) {
	for (std::size_t i = 0; i < length; i++)
		(*f)(address[i]);
}

#endif
