/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:14 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/24 11:39:35 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "MutantStack.hpp"
#include <list>
int	main(void)
{
	{
		std::cout << "Testing mstack iterator functionality --------- " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Forward iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Reverse iterator -------------" << std::endl;
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		++it;
		--it;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	{
		std::cout << "Testing list iterator functionality --------- " << std::endl;
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << "Forward iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int>::reverse_iterator rit = mlist.rbegin();
		std::list<int>::reverse_iterator rite = mlist.rend();
		++it;
		--it;
		std::cout << "Reverse iterator -------------" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}

	{
		std::cout << "Testing mstack const iterator functionality --------- " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::const_iterator it = mstack.cbegin();
		MutantStack<int>::const_iterator ite = mstack.cend();
		++it;
		--it;
		std::cout << "Forward const iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Reverse const iterator -------------" << std::endl;
		MutantStack<int>::const_reverse_iterator rit = mstack.crbegin();
		MutantStack<int>::const_reverse_iterator rite = mstack.crend();
		++it;
		--it;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	{
		std::cout << "Testing list const iterator functionality --------- " << std::endl;
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::list<int>::const_iterator it = mlist.cbegin();
		std::list<int>::const_iterator ite = mlist.cend();
		++it;
		--it;
		std::cout << "Forward const iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int>::const_reverse_iterator rit = mlist.crbegin();
		std::list<int>::const_reverse_iterator rite = mlist.crend();
		++it;
		--it;
		std::cout << "Reverse const iterator -------------" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	{
		std::cout << "Testing mstack copy constructor functionality --------- " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> ccstack(mstack);

		MutantStack<int>::iterator it = ccstack.begin();
		MutantStack<int>::iterator ite = ccstack.end();
		++it;
		--it;
		std::cout << "Forward iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Reverse iterator -------------" << std::endl;
		MutantStack<int>::reverse_iterator rit = ccstack.rbegin();
		MutantStack<int>::reverse_iterator rite = ccstack.rend();
		++it;
		--it;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	{
		std::cout << "Testing mstack copy assignment functionality --------- " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> ccstack;
		ccstack = mstack;

		MutantStack<int>::iterator it = ccstack.begin();
		MutantStack<int>::iterator ite = ccstack.end();
		++it;
		--it;
		std::cout << "Forward iterator -------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Reverse iterator -------------" << std::endl;
		MutantStack<int>::reverse_iterator rit = ccstack.rbegin();
		MutantStack<int>::reverse_iterator rite = ccstack.rend();
		++it;
		--it;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
}
