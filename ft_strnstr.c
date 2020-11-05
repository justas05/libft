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
	const char *temp_str;
	const char *temp_needle;

	temp_str = (char*)str + size;
	while (*str)
	{
		temp_needle = needle;
		temp_str = str;
		while (*temp_needle && *temp_needle++ == *temp_str++)
			;
		if (!*temp_needle)
			return ((char*)str);
		++str;
	}
	return (NULL);
}
