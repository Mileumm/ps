/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:55:41 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:09:32 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr && new)
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		new->prev = ptr;
		ptr->next = new;
	}
	else if (!lst || !*lst)
		*lst = new;
}
