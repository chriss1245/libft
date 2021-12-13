/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42Madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:27:05 by chris             #+#    #+#             */
/*   Updated: 2021/12/13 15:31:23 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	char			*s_;
	unsigned int	i;

	size = 0;
	while (s[size] != 0)
		size++;
	s_ = (char *) ft_calloc(size + 1, sizeof(char));
	if (!s_)
		return (s_);
	i = 0;
	while (i < size)
	{
		s_[i] = s[i];
		i++;
	}
	return (s_);
}
