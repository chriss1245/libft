/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:06:30 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/07 18:36:54 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	str_len(const char *src);

int	ft_strlcpy(char *dst, const char *src, unsigned int destsize)
{
	unsigned int	i;

	i = 0;
	if (destsize != 0)
	{
		while (i < destsize - 1 && dst[i] != 0 && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (str_len(src));
}

static int	str_len(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
