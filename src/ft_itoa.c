/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:08:49 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:20:30 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	get_size(long int n);
static void	fill_number(char *str, long int n);
static char	*itoa_zero(void);

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	digits;
	long int		n_;
	int				neg;

	neg = 0;
	n_ = (long int) n;
	if (n < 0)
	{
		neg = 1;
		n_ *= -1;
	}
	if (!n)
		return (itoa_zero());
	digits = get_size(n_);
	str = (char *) ft_calloc(digits + neg + 1, sizeof(char));
	if (!str)
		return (str);
	if (neg)
		str[0] = '-';
	fill_number(str + digits + neg - 1, n_);
	return (str);
}

static char	*itoa_zero(void)
{
	char	*str;

	str = (char *) ft_calloc(2, sizeof(char));
	str[0] = '0';
	str[1] = 0;
	return (str);
}

static void	fill_number(char *str, long int n)
{
	if (n)
	{
		*str = (n % 10) + '0';
		fill_number(str - 1, n / 10);
	}
}

static int	get_size(long int n)
{
	long int	i;
	int			digits;

	i = 1;
	digits = 0;
	while (n / i > 0)
	{
		digits++;
		i *= 10;
	}
	return (digits);
}
