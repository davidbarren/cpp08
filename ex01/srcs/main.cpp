/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:07:18 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/23 15:48:54 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main(void)
{
	std::cout << "rotta" << std::endl;
	Span sp(100050);
	std::vector<int> myvec{30, 40, 50};
	for (int i = 0; i < 10000; i++)
		myvec.push_back(i);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.populateSpan(myvec.begin(), myvec.end());
	sp.addNumber(42);
	std::cout << "shortest span: " ;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " ;
	std::cout << sp.longestSpan() << std::endl;
}
