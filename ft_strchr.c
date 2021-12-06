/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:39:20 by chris             #+#    #+#             */
/*   Updated: 2021/12/06 12:25:43 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*s_;
	unsigned char	c_;

	s_ = (char *)s;
	c_ = (unsigned char) c;
	while (*s_ != '\0')
	{
		if (*s_ == c_)
			return (s_);
		s_++;
	}
	if (c_ == '\0')
		return (s_);
	return (0);
}
