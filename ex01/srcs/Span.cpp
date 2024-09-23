/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:16:35 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/23 16:49:21 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_size(N)
{
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

int	Span::shortestSpan()
{
	int	min_span = 0;

	if (m_vec.size() <= 1)
		throw NoSpanException();
	std::sort(m_vec.begin(), m_vec.end());
	for (std::vector<int>::iterator i = m_vec.begin(); i < m_vec.end() - 1; i++)
	{
		auto cur_span = *(i + 1) - *i;
		if (!min_span || cur_span < min_span)
			min_span = cur_span;
	}
	if (!min_span)
		throw NoSpanException();
	return min_span;
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

void	Span::populateSpan(std::vector<int>::iterator fill_from, std::vector<int>::iterator end)
{
	size_t range = end - fill_from;
	if (range + m_vec.size() > m_size)
		throw NoSpaceException();
	m_vec.insert(m_vec.end(),fill_from, end);
}

void	Span::printSpan() const
{
	std::cout << "printing the Span contents" << std::endl;
	for (auto const& iter : m_vec)
		std::cout << iter << std::endl;
}

const char *Span::NoSpanException::what() const noexcept
{
	return "No span found";	
}

const char *Span::NoSpaceException::what() const noexcept
{
	return "Number of elements exceeds container size";
}
