/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:13:32 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/06 13:33:08 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	putnbr_rec(long int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_;

	n_ = (long int) n;
	if (n < 0)
	{
		write(fd, "-", 1);
		n_ *= -1;
	}
	putnbr_rec(n_, fd);
}

static	void	putnbr_rec(long int n, int fd)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = (n % 10) + '0';
		putnbr_rec(n / 10, fd);
		write(fd, &c, 1);
	}
}
