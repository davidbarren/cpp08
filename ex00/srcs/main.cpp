/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:00:51 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 15:48:53 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
int	main(void)
{
	std::cout << "hello :)" << std::endl;
	std::vector<int> myvec = {30, 40, 50};
	std::cout << "result of easyfind: " << easyfind(myvec, 50) << std::endl;
	std::cout << "result of easyfind: " << easyfind(myvec, 5) << std::endl;
	std::deque<int> mydeque = {30, 40, 50};
	std::cout << "result of easyfind: " << easyfind(mydeque, 50) << std::endl;
	std::cout << "result of easyfind: " << easyfind(mydeque, 5) << std::endl;
}
