/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:08:16 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/16 21:58:14 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		num;
	char	*str;

	str = (char *) nptr;
	sign = 1;
	num = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == 45)
	{
		sign = -1;
		str++;
	}
	else if (*str == 43)
		str++;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	return (num * sign);
}
