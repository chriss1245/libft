/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:00:56 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/07 15:10:38 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*dest_;
	unsigned char	*src_;
	
	if (dest < src)
		return ft_memcpy(dest, src, n);
	
	src_ = (unsigned char *) src;
	dest_ = (unsigned char *) dest;
	src_ = src_ + (n - 1);
	dest_ = dest_ + (n - 1);

	i = n - 1;
	while (i > 0)
	{
		*dest_ = *src_;
		dest--;
		src--;
		i--;
	}
	return (dest);
}



