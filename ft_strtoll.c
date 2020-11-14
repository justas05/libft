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

static long		ft_check_sign(char **buf)
{
	long neg;

	neg = 0;
	if (**buf == '-' || **buf == '+')
	{
		if (**buf == '-')
			neg = 1;
		++(*buf);
	}
	return (neg);
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

long long		ft_strtoll(const char *buf)
{
	unsigned long long	acc;
	unsigned long long	cutoff;
	int					cutlim;
	int					base;
	int					neg;
	int					any;
	int					c;
	const char			*s;
	
	s = buf;
	neg = 0;
	ft_skip_spaces((char**)&s);
	neg = ft_check_sign((char**)&s);
	base = ft_get_base((char**)&s);
	cutoff = neg ? -(unsigned long long)LLONG_MIN : LLONG_MAX;
	cutlim = cutoff % (unsigned long long)base;
	cutoff /= (unsigned long long)base;
	acc = 0;
	any = 0;
	while ((c = *s++))
	{
		if (ft_isdigit(c))
			c -= '0';
		else if (ft_isalpha(c))
			c -= ft_isupper(c) ? 'A' - 10 : 'a' - 10;
		else
			break;
		if (c >= base)
			break;
		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
			any = -1;
		else
		{
			any = 1;
			acc = acc * base + c;
		}
	}
	if (any < 0)
		acc = neg ? LLONG_MIN : LLONG_MAX;
	else if (neg)
		acc = -acc;
	return (acc);
}
