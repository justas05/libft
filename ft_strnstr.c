/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *needle, size_t size)
{
	const char	*temp_str;
	const char	*temp_needle;
	size_t		temp_size;

	temp_size = size;
	while (*str)
	{
		temp_needle = needle;
		temp_str = str;
		temp_size = size;
		while (*temp_needle && temp_size && *temp_needle == *temp_str++)
		{
			++temp_needle;
			--temp_size;
		}
		if (!*temp_needle)
			return ((char*)str);
		else if (!temp_size)
			return (NULL);
		++str;
		--size;
	}
	return (NULL);
}
