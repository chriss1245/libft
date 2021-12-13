/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:00:56 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:27:38 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*dest_;
	unsigned char	*src_;

	if (dst < src)
		return (ft_memcpy(dst, src, n));
	if (src == 0 && dst == 0)
		return (dst);
	src_ = (unsigned char *) src;
	dest_ = (unsigned char *) dst;
	src_ = src_ + (n - 1);
	dest_ = dest_ + (n - 1);
	i = n;
	while (i--)
		*dest_-- = *src_--;
	return (dst);
}
