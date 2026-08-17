/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:37:21 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 17:15:03 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // std::find
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);

    if (it == container.end())
        throw std::exception();

    return it;
}

#endif