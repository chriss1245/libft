/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:57:30 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:37:54 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static unsigned int	number_of_words(const char *s, char c);
static int			allocate_substring(char **dest, const char *s, \
										char const c);
static char			**free_all(char **strings, unsigned int idx_word);
static char			**init_table(const char *s, unsigned int words);

char	**ft_split(char const *s, char c)
{
	char			**strings;
	unsigned int	words;
	unsigned int	aux[3];

	words = number_of_words(s, c);
	strings = init_table(s, words);
	if (!strings)
		return (0);
	aux[0] = 0;
	aux[1] = 0;
	while (aux[0] < words)
	{
		if (s[aux[1]] != c)
		{
			aux[2] = allocate_substring(strings + aux[0], s + aux[1], c);
			if (!aux[2])
				return (free_all(strings, aux[0] - 1));
			else
				aux[1] += aux[2];
			aux[0]++;
		}
		else
			aux[1]++;
	}
	return (strings);
}

static char	**init_table(const char *s, unsigned int words)
{
	char	**table;

	if (!s)
		return (0);
	table = ft_calloc(words + 1, sizeof(char *));
	if (!table)
		return (0);
	return ((char **) table);
}

static int	allocate_substring(char **dest, const char *s, char const c)
{
	unsigned int	n;

	n = 0;
	while (s[n] != c && s[n] != 0)
		n++;
	*dest = (char *) ft_calloc(n + 1, sizeof(char));
	if (!*dest)
		return (0);
	ft_strlcpy(*dest, s, n + 1);
	return (n);
}

static unsigned int	number_of_words(const char *s, char c)
{
	unsigned int	words;
	unsigned int	i;
	int				is_last_separation;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	is_last_separation = 1;
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

static char	**free_all(char **strings, unsigned int idx_word)
{
	unsigned int	i;

	i = 0;
	while (i < idx_word)
	{
		free((void *) strings[i]);
		i++;
	}
	free(strings);
	return (0);
}
