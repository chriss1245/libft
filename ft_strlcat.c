/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:39:12 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/07 20:05:57 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	unsigned int strlen(char *s);

int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	n_cat;
	unsigned int	dstsize_;
	unsigned int	srcsize_;

	dstsize_ = strlen(dst);
	srcsize_ = strlen((char *)src);

	if (dstsize == 0 || dstsize < dstsize_)
		return ((int) (dstsize_ + srcsize_) - 1);

	dst = dst + dstsize_;
	n_cat = dstsize - dstsize_ - 1;
	while (n_cat)
	{
		*dst = *src;
		src++;
		dst++;
		n_cat--;
	}
	*dst = 0;
	return ((int) (dstsize_ + srcsize_) - 1);
}

static	unsigned int strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i); 
}
