/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:00:51 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/25 14:36:13 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <assert.h>
int	main(void)
{
	std::cout << "hello :)" << std::endl;
	std::vector<int> myvec = {30, 40, 50};
	assert(*easyfind(myvec, 50) == 50);
	std::cout << "Value found at iterator returned from easyfind: " << *easyfind(myvec,50) << std::endl;
	try{
		easyfind(myvec,42);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception of type: " << e.what() << std::endl;
	}
	std::deque<int> mydeque = {30, 40, 50};
	assert(*easyfind(mydeque, 50) == 50);
	try{
		easyfind(mydeque,42);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception of type: " << e.what() << std::endl;
	}
	std::cout << "Value found at iterator returned from easyfind: " << *easyfind(mydeque,50) << std::endl;
}
