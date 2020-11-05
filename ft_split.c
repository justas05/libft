/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	**ft_split(char *str, char *sep)
{
	size_t	count;
	char	**res;
	size_t	i;
	int		j;

	count = ft_word_count(str, sep);
	res = (char**)malloc(sizeof(char*) * (count + 1));
	i = 0;
	j = 0;
	if (!res || (res[count] = 0))
		return (NULL);
	while (*str++)
		if (ft_strchr(sep, *(str - 1)))
		{
			if (i != 0)
			{
				res[j] = (char*)malloc(sizeof(char) * (i + 1));
				ft_strncpy(res[j++], str - i - 1, i)[i] = 0;
			}
			i = 0;
		}
		else
			++i;
	return (res);
}
