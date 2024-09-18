/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:01:56 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 15:47:17 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T>
int	easyfind(T &cont, int tomatch)
{
	if (std::find(cont.begin(), cont.end(), tomatch) != cont.end())
		return (1);
	return -1;
}
#endif
