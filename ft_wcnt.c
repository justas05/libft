/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcnt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t		ft_word_count(char *str, const char *sep)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	if (sep == NULL)
		sep = " ";
	while (*str++)
	{
		if (!ft_strchr(sep, *str))
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
