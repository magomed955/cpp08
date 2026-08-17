/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:40:31 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 17:30:50 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _data = other._data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (_data.size() >= _maxSize)
        throw std::exception();

    _data.push_back(number);
}

int Span::shortestSpan() const
{
    if (_data.size() < 2)
        throw std::exception();

    std::vector<int> tmp = _data;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = tmp[1] - tmp[0];

    for (size_t i = 1; i < tmp.size() - 1; i++)
    {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < minSpan)
            minSpan = diff;
    }

    return minSpan;
}

int Span::longestSpan() const
{
    if (_data.size() < 2)
        throw std::exception();

    int min = *std::min_element(_data.begin(), _data.end());
    int max = *std::max_element(_data.begin(), _data.end());

    return max - min;
}