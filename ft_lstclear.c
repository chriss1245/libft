/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:55:32 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/05 11:14:41 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

		if ((*lst) -> next == 0)
		{
			ft_lstdelone(*lst, del);
		}
		else
		{	
			ptr = ((*lst) -> next);
			ft_lstdelone((*lst), del);
			ft_lstclear(&ptr, del);
		}
		*lst = 0;
}
