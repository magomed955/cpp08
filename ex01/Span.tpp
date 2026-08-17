/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:40:44 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 17:15:21 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
    while (begin != end)
    {
        if (_data.size() >= _maxSize)
            throw std::exception();
        _data.push_back(*begin);
        ++begin;
    }
}

#endif