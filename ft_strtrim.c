/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:19:29 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/23 10:02:12 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

static unsigned int	get_start(char *s1, char const *set);
static unsigned int	get_end(char *s1, char const *set);

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*n;

	if (!s1)
		return ((char *) s1);
	if (!set)
		return (ft_strdup(s1));
	end = get_end((char *) s1, set);
	start =	 get_start((char *) s1, set);
	if (end < start)
		return ft_strdup("");
	n = (char *) ft_calloc(end - start + 2, sizeof(char));
	if (!n)
		return (n);
	ft_memcpy(n, s1 + start, end - start + 1);
	n[end - start + 1] = 0;
	return (n);
}

static unsigned int	get_start(char *s1, char const *set)
{
	unsigned int	start;
	unsigned int	j;
	int				finished;

	start = 0;
	finished = 0;
	while (*s1 != 0 && !finished)
	{
		j = 0;
		while (*s1 != set[j] && set[j])
			j++;
		if (set[j] != *s1)
			finished = 1;
		else
			start++;
		s1++;
	}
	return (start);
}

static unsigned int	get_end(char *s1, char const *set)
{
	unsigned int	end;
	int	i;
	unsigned int	j;
	int				finished;

	end = ft_strlen(s1);
	if (!end)
		return (end);
	end--;
	i = end;
	finished = 0;
	while (i > 0 && !finished && end > 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
		{
			j++;
		}
		if (set[j] != s1[i])
			finished = 1;
		else
			end--;
		i--;
	}
	return (end);
}
