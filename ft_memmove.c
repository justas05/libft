/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*buf;
	unsigned char	*buf_c;
	unsigned char	*dest_c;
	size_t			num_c;

	dest_c = dest;
	num_c = num;
	buf = malloc(sizeof(unsigned char) * num);
	buf_c = buf;
	if (!buf)
		return (void*)src;
	while (num--)
		*buf_c++ = *(unsigned char*)src++;
	while (num_c--)
		*dest_c++ = *buf++;
	return (dest);
}
