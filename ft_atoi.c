/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *buf)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*buf))
		++buf;
	if (*buf == '-' || *buf == '+')
	{
		if (*buf == '-')
			sign = -1;
		++buf;
	}
	while (*buf && ft_isdigit(*buf))
	{
		res *= 10;
		res += *buf - '0';
		++buf;
	}
	return (res * sign);
}
