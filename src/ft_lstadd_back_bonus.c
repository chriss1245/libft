/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:51:32 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:20:50 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	 else if ((*lst)->next == 0)
		(*lst)->next = new;
	else
		ft_lstadd_back(&((*lst)->next), new);
}
