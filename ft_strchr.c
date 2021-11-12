/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <cmanzano@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:39:20 by chris             #+#    #+#             */
/*   Updated: 2021/11/12 19:40:00 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, char c)
{
	char			*s_;
	unsigned char	c_;

	s_ = (char *)s;
	c_ = (unsigned char) c;
	while (*s_ != 0)
	{
		if (*s_ == c_)
			return (s_);
		s_++;
	}
	if (c_ == 0)
		return (s_);
	return (0);
}
