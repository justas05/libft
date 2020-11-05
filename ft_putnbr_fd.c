/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:38:24 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/15 23:25:14 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	c = '0' + n % 10;
	if (n / 10 == 0)
	{
		if (n < 0)
			write(fd, "-", 1);
	}
	if (n)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &c, 1);
}