/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42Madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:12:52 by chris             #+#    #+#             */
/*   Updated: 2021/12/13 15:19:16 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
