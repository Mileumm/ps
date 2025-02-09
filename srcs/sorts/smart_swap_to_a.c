/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_swap_to_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:34:56 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 03:35:13 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_min_nb(t_list *lst)
{
	t_list	*ptr;
	int		nb;
	int		i;
	int		i_max;

	ptr = lst;
	nb = 2147483647;
	i = 0;
	i_max = 0;
	while (ptr)
	{
		if (nb > ptr->content)
		{
			nb = ptr->content;
			i_max = i;
		}
		i++;
		ptr = ptr->next;
	}
	return (i_max);
}

int	ft_fill_target_b(int content, t_list *lst)
{
	int		index;
	int		index_target;
	t_list	*ptr;
	int		close_score;

	index = 0;
	index_target = 0;
	ptr = lst;
	close_score = -2147483648;
	while (ptr)
	{
		if (content - ptr->content < 0)
		{
			if (content - ptr->content > close_score)
			{
				close_score = content - ptr->content;
				index_target = index;
			}
		}
		index++;
		ptr = ptr->next;
	}
	if (close_score == -2147483648)
		index_target = ft_min_nb(lst);
	return (index_target);
}

void	ft_target_a(t_list **a, t_list **b)
{
	t_list		*ptr_b;
	t_swap_data	data;
	int			m_a;

	ptr_b = *b;
	while (ptr_b)
	{
		data.l_a = ft_lstsize(*a);
		data.l_b = ft_lstsize(*b);
		m_a = data.l_a / 2;
		ptr_b->data->target = ft_fill_target_b(ptr_b->content, *a);
		data.i_a = ptr_b->data->target;
		ft_exec_swap_a_a(a, data, m_a);
		ptr_b = ptr_b->next;
		pa(a, b);
	}
}
