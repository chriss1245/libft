/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:32:05 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/12 10:36:37 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr (const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (big[i] != 0 && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != 0)
			j++;
		if (little[j] == 0)
			return (i + (char *)  big);
		i++;
	}
	return (0);
}
