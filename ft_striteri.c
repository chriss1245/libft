/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 12:40:32 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/04 12:53:42 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	if (s != 0 && *f != 0)
	{
		len = ft_strlen((char *) s);
		i = 0;
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
