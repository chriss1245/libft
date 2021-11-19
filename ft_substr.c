/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:21:25 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/19 13:33:31 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	src_len;
	unsigned int	final_len;
	char			*new;
	unsigned int	i;

	src_len = ft_strlen((char *) s);
	if (start > src_len - 1)
		return (0);
	else
		final_len = src_len - start;

	if (len < final_len)
		final_len = len;
	new = (char *) ft_calloc(final_len, sizeof(char));
	i = 0;
	if (final_len == 0)
		return (0);	
	if (final_len == 1)
	{
		new[i] = 0;
		return (new);
	}
	while(final_len)
	{
		new[i] = s[start + i];
		i++;
		final_len--;
	}
	new[i] = 0;
	return (new);
}
