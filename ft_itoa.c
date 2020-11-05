/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*buf;
	int		len;
	int		i;

	len = ft_numlen(n);
	i = len - 1;
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	buf[len] = 0;
	if (n < 0)
		buf[0] = '-';
	if (len == 1 && n == 0)
		buf[len - 1] = '0';
	while (n != 0)
	{
		buf[i--] = '0' + n % 10;
		n /= 10;
	}
	return (buf);
}
