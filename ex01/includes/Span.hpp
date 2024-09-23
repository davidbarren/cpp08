/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:09:39 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/23 16:35:39 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <iostream>

class	Span
{
	private:
		Span();
		unsigned int	m_size;
		std::vector<int> m_vec;
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		void	addNumber(int num);
		int		shortestSpan() ;
		int		longestSpan() const;
		void	populateSpan(std::vector<int>::iterator fill_from, std::vector<int>::iterator end);
		void	printSpan() const;
		class NoSpanException : public std::exception
		{
			const char* what() const noexcept;
		};
		class NoSpaceException : public std::exception
		{
			const char* what() const noexcept;
		};



};
#endif
