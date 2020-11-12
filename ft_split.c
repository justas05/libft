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

/*static size_t	ft_word_count(char *str, const char sep)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*str++)
	{
		if (sep != *str)
		{
			if (!state)
				count++;
			state = 1;
		}
		else
			state = 0;
	}
	return (count);
}

static char		**ft_extract_words()
{
	while (*str++)
		if (c == *(str - 1))
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
	if (i != 0)
	{
		res[j] = (char*)malloc(sizeof(char) * (i + 1));
		ft_strncpy(res[j++], str - i - 1, i)[i] = 0;
	}
}

static void		ft_clear_strs(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	if (!strs)
		return ;
	while (i < size)
	{
		if (str[i])
			free(str[i]);
		++i;
	}
	free(strs);
}

char			**ft_split(char *str, char c)
{
	size_t	count;
	char	**res;
	size_t	i;
	int		j;

	if (!str)
		return (NULL);
	count = ft_word_count(str, c);
	res = (char**)malloc(sizeof(char*) * (count + 1));
	i = 0;
	j = 0;
	if (!res || (res[count] = 0))
		return (NULL);
	
	return (res);
}*/
