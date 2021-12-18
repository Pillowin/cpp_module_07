/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:38:55 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 21:58:46 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template<typename T>
class Array {
	public:
		Array<T>(void) : elements(NULL), size(0) {}
		Array<T>(Array<T> const& rhs) { *this = rhs; }
		Array<T>(std::size_t n) : elements(new T[n]), size(n) {}

		~Array<T>(void) { delete[] elements; }

		Array<T>& operator=(Array<T> const& rhs) {
			if (this == &rhs)
				return (*this);
			size	 = rhs.size;
			elements = new T[size];
			for (std::size_t i = 0; i < size; i++)
				elements[i] = rhs.elements[i];
			return (*this);
		}

		T& operator[](std::size_t const& idx) const {
			if (idx >= size)
				throw std::out_of_range("index is greater than array size");
			return (elements[idx]);
		}

		std::size_t get_size(void) const { return (size); }

	private:
		T* elements;
		std::size_t size;
};

#endif
