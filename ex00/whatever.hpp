/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:19:07 by agautier          #+#    #+#             */
/*   Updated: 2021/12/02 12:43:04 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a	= b;
	b	= tmp;
}

template<typename T>
T const& min(T const& x, T const& y) {
	return (x < y ? x : y);
}

template<typename T>
T const& max(T const& x, T const& y) {
	return (x > y ? x : y);
}

#endif
