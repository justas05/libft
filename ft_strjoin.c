/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:05 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	wordc(char **str_1, size_t *j)
{
	size_t i;

	i = 0;
	*j = 0;
	while (*str_1)
	{
		i += ft_strlen(*str_1);
		++*j;
		str_1++;
	}
	return (i);
}

char			*ft_strjoin(char **str_1, char *str_2)
{
	size_t	i;
	size_t	j;
	char	*res;

	j = 0;
	res = NULL;
	i = wordc(str_1, &j) + (j - 1) * ft_strlen(str_2);
	if (j == 0 || !(res = malloc(sizeof(char) * (i + 1))))
	{
		return (NULL);
	}
	while (*str_1)
	{
		ft_strcpy(res, *str_1);
		j--;
		if (j)
		{
			ft_strcpy(res, str_2);
		}
		str_1++;
	}
	return (res);
}
