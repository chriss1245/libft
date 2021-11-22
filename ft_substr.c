/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:21:25 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/22 09:53:01 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	new = (char *) ft_calloc(len + 1, sizeof(*s));
	if (!new)
		return (0);
	if (ft_strlen(new) < start)
	{
		return (new);
	}
	i = 0;
	while(i < len && s[start + i] != 0)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}
