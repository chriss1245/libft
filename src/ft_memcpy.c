/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:26 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/07 17:26:28 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*dest_;
	unsigned char	*src_;

	dest_ = dest;
	src_ = (unsigned char *) src;
	if (dest == 0 && src == 0)
		return (dest);
	while (n > 0)
	{
		*dest_ = *src_;
		dest_++;
		src_++;
		n--;
	}
	return (dest);
}
