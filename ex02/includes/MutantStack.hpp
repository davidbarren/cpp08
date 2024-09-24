/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:49 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/24 11:38:34 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <deque>
#include <stack>
template <class T, class Container=std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(){
		}
		~MutantStack(){
		}
		MutantStack(const MutantStack<T>& other) : std::stack<T, Container>(other)
		{
		}
		MutantStack& operator=(const MutantStack<T>& other){
			if (this != &other)
				std::stack<T, Container>::operator = (other);
			return *this;
		}
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		const_iterator	cbegin() const
		{
			return this->c.cbegin();
		}
		const_iterator cend() const
		{
			return this->c.cend();
		}
		reverse_iterator	rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator rend()
		{
			return this->c.rend();
		}
		const_reverse_iterator	crbegin() const
		{
			return this->c.crbegin();
		}
		const_reverse_iterator crend() const
		{
			return this->c.crend();
		}

};
#endif
