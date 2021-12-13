/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:34:48 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:33:54 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*s_;

	if (s == 0 || (*f) == 0)
		return (0);
	len = ft_strlen((char *) s);
	s_ = (char *) ft_calloc(len + 1, sizeof(char));
	if (s_ == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		s_[i] = f(i, s[i]);
		i++;
	}
	s_[i] = 0;
	return (s_);
}
