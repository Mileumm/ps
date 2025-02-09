/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:43:31 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 18:53:11 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_order(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return (1);
	while (ptr->next)
	{
		if (ptr->content > ptr->next->content)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}
