/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:08:16 by cmanzano          #+#    #+#             */
/*   Updated: 2021/10/11 09:16:13 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c);

int	ft_atoi(char *str)
{
	int	sign;
	int	num;
	int	i;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 59 && str[i] != 0)
	{
		num = num * 10 + ((int) str[i] - 48);
		i++;
	}
	return (num * sign);
}

static int	is_space(char c)
{
	if (c == 32 || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
