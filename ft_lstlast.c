/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:40:44 by cmanzano          #+#    #+#             */
/*   Updated: 2021/12/04 15:56:53 by cmanzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (lst);
	if ((*lst).next == 0)
		return (lst);
	return ft_lstlast((*lst).next);
}
