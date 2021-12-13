/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:53:30 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/12 12:27:29 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *) s1;
	s2_ = (unsigned char *) s2;
	while (n > 0)
	{
		if (*s1_ != *s2_ || *s1_ == 0 || *s2_ == 0)
			return (*s1_ - *s2_);
		n--;
		s1_++;
		s2_++;
	}
	return (0);
}
