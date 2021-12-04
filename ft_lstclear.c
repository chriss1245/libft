/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:55:32 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/04 18:23:01 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst != 0)
	{
		if ((*lst) -> next == 0)
		{
			ft_lstdelone(*lst, del);
		}
		else
		{
			ft_lstclear(&((*lst) -> next), del);
			ft_lstdelone((*lst) -> next, del);
		}
		*lst = 0;
	}
}
