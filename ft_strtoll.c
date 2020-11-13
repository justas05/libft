/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void		ft_skip_spaces(char **buf)
{
	while (ft_isspace(**buf))
		++(*buf);
}

static long		ft_get_sign(char **buf)
{
	long sign;

	sign = 1;
	if (**buf == '-' || **buf == '+')
	{
		if (**buf == '-')
			sign = -1;
		++(*buf);
	}
	return (sign);
}

static long		ft_get_base(char **buf)
{
	long base;

	base = 10;
	if (**buf == '0')
	{
		base = 8;
		++(*buf);
		if (**buf == 'x' || **buf == 'X')
		{
			base = 16;
			++(*buf);
		}
	}
	return (base);
}

long			ft_strtol(const char *buf)
{
	long res;
	long sign;
	long base;

	res = 0;
	sign = 1;
	ft_skip_spaces(&buf);
	sign = ft_get_sign(&buf);
	base = ft_get_base(&buf);
	while (*buf && ft_isdigit(*buf))
	{
		res *= 10;
		res += *buf - '0';
		++buf;
	}
	return (res * sign);
}
