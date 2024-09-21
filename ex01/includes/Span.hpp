/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:09:39 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/22 00:04:38 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>

class	Span
{
	private:
		Span();
		int	m_size;
		std::vector<int> m_vec;
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		void	addNumber(int num);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	populateSpan();
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
