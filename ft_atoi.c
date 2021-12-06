/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:08:16 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/05 17:55:08 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number(char *str, int sign);

int	ft_atoi(const char *nptr)
{
	int		sign;
	char	*str;

	str = (char *) nptr;
	sign = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == 45)
	{
		sign = -1;
		str++;
	}
	else if (*str == 43)
		str++;
	return (get_number(str, sign));
}

static int	get_number(char *str, int sign)
{
	long int	num;

	num = 0;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - 48);
		if (num * sign < -2147483648)
			return (0);
		else if (num > 2147483647 && sign == 1)
			return (-1);
		str++;
	}
	return ((int) num * sign);
}
