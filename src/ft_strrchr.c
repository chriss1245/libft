/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:55:12 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/06 12:27:07 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	char			*s_;
	unsigned char	c_;

	s_ = (char *) s;
	c_ = (unsigned char) c;
	len = 0;
	while (*s_)
	{
		s_++;
		len++;
	}
	if (c_ == 0)
		return (s_);
	while (len >= 0)
	{
		if (*s_ == c_)
			return (s_);
		s_--;
		len--;
	}
	return (0);
}
