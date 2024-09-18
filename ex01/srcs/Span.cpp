/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:16:35 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 17:27:47 by dbarrene         ###   ########.fr       */
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

void	Span::addNumber()
{
	// throw exception when it is  too full
}

int	Span::shortestSpan() const
{
	// use algorithm
}

int	Span::longestSpan() const
{
// use algorithm
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
