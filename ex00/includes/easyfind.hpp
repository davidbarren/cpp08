/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:01:56 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/25 14:36:35 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>
template <typename T>
typename T::iterator easyfind(T cont, int tomatch)
{
	typename T::iterator iter = std::find(cont.begin(), cont.end(), tomatch);
	if (iter == cont.end())
		throw std::runtime_error("target integer not found in container");
	return iter;
}
#endif
