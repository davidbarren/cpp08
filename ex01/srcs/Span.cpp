/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:16:35 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/22 00:11:56 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_size(N)
{
	 m_vec.reserve(N);
}

Span::Span(const Span& other): m_size(other.m_size), m_vec(other.m_vec)
{
}

Span& Span::operator=(const Span& other)
{
	m_size = other.m_size;
	m_vec = other.m_vec;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (m_vec.size() + 1 > (size_t) m_size)
		throw NoSpaceException();
	m_vec.push_back(num);
}

int	Span::shortestSpan() const
{
	if (m_vec.size() <= 1)
		throw NoSpanException();
	int min = *std::min_element(m_vec.begin(), m_vec.end());
	// find second min then 2nd minus min
	return 1;
}

int	Span::longestSpan() const
{
	if (m_vec.size() <= 1)
		throw NoSpanException();
	int max = *std::max_element(m_vec.begin(), m_vec.end());
	int min = *std::min_element(m_vec.begin(), m_vec.end());
	if (max == min)
		throw NoSpanException();
	return max - min;
}

void	Span::populateSpan()
{
// use algorithm to fill container with pseudorandom values
}

const char *Span::NoSpanException::what() const noexcept
{
	return "No span found";	
}

const char *Span::NoSpaceException::what() const noexcept
{
	return "Number of elements exceeds container size";
}
