/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:39:12 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/12 13:33:54 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	str_len(char *s);



unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	n_cat;
	int	dstsize_;
	int	srcsize_;

	dstsize_ = str_len(dst);
	srcsize_ = str_len((char *)src);

	if (dstsize == 0 || (int) dstsize < dstsize_)
		return ((unsigned int) (dstsize + srcsize_));

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
	return ((unsigned int) (dstsize_ + srcsize_));
}

static	int str_len(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i); 
}
