/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:19:18 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:25:48 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*aux;

	if (!lst)
		return (0);
	dst = ft_lstnew(f(lst -> content));
	if (!dst)
	{
		ft_lstclear(&dst, del);
		return (0);
	}
	lst = lst -> next;
	aux = dst;
	while (lst)
	{
		ft_lstadd_back(&aux, ft_lstnew(f(lst -> content)));
		aux = aux -> next;
		lst = lst -> next;
	}
	return (dst);
}
