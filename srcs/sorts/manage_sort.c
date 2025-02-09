/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 22:45:47 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 03:30:52 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_last_push(t_list **a, int len, int index_min)
{
	if (index_min < len / 2)
	{
		while (index_min > 0)
		{
			ra(a);
			index_min--;
		}
	}
	else
	{
		while (index_min < len)
		{
			rra(a);
			index_min++;
		}
	}
}

void	ft_final_sort(t_list **a)
{
	int		len;
	int		min;
	int		index_min;
	int		index;
	t_list	*ptdr;

	len = ft_lstsize(*a);
	ptdr = *a;
	min = ptdr->content;
	index = 0;
	index_min = 0;
	while (ptdr)
	{
		if (ptdr->content < min)
		{
			min = ptdr->content;
			index_min = index;
		}
		index++;
		ptdr = ptdr->next;
	}
	ft_last_push(a, len, index_min);
}

void	ft_manage_sort(t_list **a)
{
	int		len;
	t_list	*b;

	len = ft_lstsize(*a);
	b = NULL;
	if (len > 4)
	{
		pb(a, &b);
		len--;
	}
	if (len > 3)
	{
		pb(a, &b);
		len--;
	}
	while (len > 3)
	{
		ft_target_b(a, &b);
		len--;
	}
	if (len == 3)
		ft_sort_three(*a);
	if (b)
		ft_target_a(a, &b);
	ft_final_sort(a);
}
