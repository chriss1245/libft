/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42Madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:27:05 by chris             #+#    #+#             */
/*   Updated: 2021/11/12 20:42:36 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	char			*s_;
	unsigned int	i;

	size = 0;
	while (s[size] != 0)
		size++;
	s_ = (char *) ft_calloc(size + 1, sizeof(char));
	i = 0;
	while (i < size)
	{
		s_[i] = s[i];
		i++;
	}
	return (s_);
}
