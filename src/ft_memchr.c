/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42Madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:27:00 by chris             #+#    #+#             */
/*   Updated: 2021/11/12 19:27:02 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	d;

	str = (unsigned char *) s;
	d = (unsigned char) c;
	while (n > 0)
	{
		if (*str == d)
			return (str);
		str++;
		n--;
	}
	return (0);
}
