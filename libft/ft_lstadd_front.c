/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:51:58 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:10:00 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!(*lst && new))
	{
		*lst = new;
		(*lst)->next = NULL;
		(*lst)->prev = NULL;
		return ;
	}
	if (lst && new)
	{
		new->next = *lst;
		(ptr)->prev = new;
		*lst = new;
		new->prev = NULL;
	}
}
