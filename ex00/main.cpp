/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:37:26 by mmutsulk          #+#    #+#             */
/*   Updated: 2026/08/17 17:21:16 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }

    std::list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    try
    {
        std::list<int>::iterator it = easyfind(l, 42);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found in list" << std::endl;
    }

    return 0;
}