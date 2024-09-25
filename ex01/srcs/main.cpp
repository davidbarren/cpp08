/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:07:18 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/25 12:25:56 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "Basic testcase adding more elements than capacity ----" << std::endl;
		Span sp(10);
		std::vector<int> myvec;
		for (int i = 0; i < 4; i++)
			myvec.push_back(i);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.populateSpan(myvec.begin(), myvec.end());
		sp.addNumber(42);
		try{
			sp.addNumber(42);
		}
		catch (std::exception &e){
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}
		std::cout << "shortest span: " ;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " ;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "Testing empty Span class----------" << std::endl;
		Span mysp(3);
		try{
			std::cout << "shortest span on empty class--" << std::endl;
			std::cout << mysp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}
		try{
			std::cout << "longest span on empty class--" << std::endl;
			std::cout << mysp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}
		std::cout << "Testing Span class with only duplicate members" << std::endl;
		mysp.addNumber(42);
		mysp.addNumber(42);
		mysp.addNumber(42);
		try{
			std::cout << "shortest span on duplicate members class--" << std::endl;
			std::cout << mysp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}
		try{
			std::cout << "longest span on duplicate members class--" << std::endl;
			std::cout << mysp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}

	}
	{
		std::cout << "Testcase adding 15k with populateSpan elements ----" << std::endl;
		Span sp(15100);
		std::vector<int> myvec;
		for (int i = 0; i < 15000; i++)
			myvec.push_back(i);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.populateSpan(myvec.begin(), myvec.end());
		sp.addNumber(42);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

		std::cout << "Testing trying to call populateSpan when it would exceed span capacity" << std::endl;
		try
		{
			sp.populateSpan(myvec.begin(), myvec.end());
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception of type: " << e.what() << std::endl;
		}
	}
}
