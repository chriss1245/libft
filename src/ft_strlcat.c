/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42Madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:36:34 by chris             #+#    #+#             */
/*   Updated: 2021/12/13 15:32:23 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	n;

	len = ft_strlen((char *) dest);
	if (len >= size)
		return (size + ft_strlen((char *) src));
	n = size - len;
	return (len + ft_strlcpy(dest + len, src, n));
}
