/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:40:06 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 17:31:12 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
private:
    unsigned int        _maxSize;
    std::vector<int>    _data;

public:
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);

    int shortestSpan() const;
    int longestSpan() const;

    template <typename Iterator>
    void addRange(Iterator begin, Iterator end);
};

#include "Span.tpp"

#endif