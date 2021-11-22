/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:37:52 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/22 11:17:47 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	char			*c;

	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		len_s1 = ft_strlen((char *) s1);
	if (s2)
		len_s2 = ft_strlen((char *) s2);
	if (len_s1 + len_s2 == 1)
		return (0);
	c = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!c)
		return (c);
	ft_memcpy(c, s1, len_s1);
	ft_memcpy(c + len_s1, s2, len_s2);
	return (c);
}
