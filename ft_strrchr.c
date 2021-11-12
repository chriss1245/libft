/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:55:12 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/12 11:08:33 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	unsigned char c_;
	char *s_;

	s_ = (char *) s;
	c_ = (unsigned char) c;
	len = 0;
	while(*s_ != 0)
	{
		s_++;
		len++;
	}
	if (c == 0)
		return (s_);
	while (len >= 0)
	{
		if (*s_ == c)
			return (s_);
		s_--;
		len--;
	}
	return (0);
}
