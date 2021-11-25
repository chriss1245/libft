/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:57:30 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/25 13:32:17 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	number_of_words(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char			*str1;
	char			**strings;
	unsigned int	words;

	str1 = (char *) s;
	words = number_of_words(s, c);
	strings = 0;
	printf("the phrase %s has %u words\n", s, words);

	return (strings);
}

static unsigned int	number_of_words(const char *s, char c)
{
	unsigned int	words;
	unsigned int	i;
	int				is_last_separation;

	words = 0;
	i = 0;
	is_last_separation =1;
	while (s[i])
	{
		if (is_last_separation && s[i] != c)
		{
			is_last_separation = 0;
			words++;
		}
		if (s[i] == c)
			is_last_separation = 1;
		i++;
	}
	return (words);
}


