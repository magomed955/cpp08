/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:41:28 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 18:26:04 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <vector>

int main()
{
    Span sp(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "-- RANGE TEST --" << std::endl;

    Span big(10000);
    std::vector<int> v;

    for (int i = 0; i < 10000; i++)
        v.push_back(i);

    big.addRange(v.begin(), v.end());

    std::cout << big.shortestSpan() << std::endl;
    std::cout << big.longestSpan() << std::endl;

    std::cout << "-- EXCEPTION TEST --" << std::endl;

    Span one(5);
    one.addNumber(42);

    try
    {
        one.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "shortestSpan exception OK" << std::endl;
    }

    try
    {
        one.longestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "longestSpan exception OK" << std::endl;
    }

    Span small(2);
    small.addNumber(1);
    small.addNumber(2);

    try
    {
        small.addNumber(3);
    }
    catch (std::exception &e)
    {
        std::cout << "addNumber capacity exception OK" << std::endl;
    }

    return 0;
}
