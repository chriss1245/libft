/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:21:25 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:36:26 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	unsigned int	len_src;

	if (!s)
		return (0);
	len_src = ft_strlen((char *) s);
	if (len > len_src)
		len = len_src;
	new = (char *) ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (new);
	if (len_src < start)
		return (new);
	i = 0;
	while (i < len && s[start + i] != 0)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}
