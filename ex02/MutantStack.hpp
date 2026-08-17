/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:43:29 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 18:27:57 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack> // conteneur adaptateur

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    MutantStack &operator=(const MutantStack &other)
    {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    // Iterator type
    typedef typename std::stack<T>::container_type::iterator iterator;

    // begin / end
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
};

#endif