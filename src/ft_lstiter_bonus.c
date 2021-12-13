/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:22:13 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:25:07 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != 0)
	{
		f(lst -> content);
		if (lst -> next != 0)
			ft_lstiter(lst -> next, f);
	}
}
