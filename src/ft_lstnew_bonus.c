/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:23:50 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/13 15:26:31 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *) ft_calloc(1, sizeof(t_list));
	if (!list)
		return (0);
	list -> content = content;
	list -> next = 0;
	return (list);
}
