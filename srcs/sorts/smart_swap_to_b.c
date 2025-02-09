/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_swap_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:34:56 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 03:37:45 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_big_nb(t_list *lst)
{
	t_list	*ptr;
	int		nb;
	int		i;
	int		i_max;

	ptr = lst;
	nb = -2147483648;
	i = 0;
	i_max = 0;
	while (ptr)
	{
		if (nb < ptr->content)
		{
			nb = ptr->content;
			i_max = i;
		}
		i++;
		ptr = ptr->next;
	}
	return (i_max);
}

void	ft_find_best_swap_a(t_list **a, t_list **b, int len_a, int len_b)
{
	t_list		*ptr_a;
	t_swap_data	data;
	int			i;

	ptr_a = *a;
	data.best_score = 2147483647;
	i = 0;
	data.l_a = len_a;
	data.l_b = len_b;
	while (ptr_a)
	{
		if (ptr_a->data->score < data.best_score)
		{
			data.best_score = ptr_a->data->score;
			data.i_a = i;
			data.i_b = ptr_a->data->target;
		}
		i++;
		ptr_a = ptr_a->next;
	}
	ft_exec_swap(a, b, data);
}

int	ft_fill_score(t_swap_data d)
{
	int	m_a;
	int	m_b;
	int	score;

	m_a = d.l_a / 2;
	m_b = d.l_b / 2;
	score = 0;
	if (d.i_a <= m_a)
		score += d.i_a;
	else
		score += d.l_a - d.i_a;
	if (d.i_b <= m_b)
		score += d.i_b;
	else
		score += d.l_b - d.i_b;
	return (score);
}

int	ft_fill_target_a(int content, t_list *lst)
{
	int		index;
	int		index_target;
	t_list	*ptr;
	int		close_score;

	index = 0;
	index_target = 0;
	ptr = lst;
	close_score = 2147483647;
	while (ptr)
	{
		if (content - ptr->content < close_score && content - ptr->content > 0)
		{
			close_score = content - ptr->content;
			index_target = index;
		}
		index++;
		ptr = ptr->next;
	}
	if (close_score == 2147483647)
		index_target = ft_big_nb(lst);
	return (index_target);
}

void	ft_target_b(t_list **a, t_list **b)
{
	t_list		*ptr_a;
	t_swap_data	data;

	ptr_a = *a;
	data.l_a = ft_lstsize(*a);
	data.l_b = ft_lstsize(*b);
	data.i_a = 0;
	while (ptr_a)
	{
		ptr_a->data->target = ft_fill_target_a(ptr_a->content, *b);
		data.i_b = ptr_a->data->target;
		ptr_a->data->score = ft_fill_score(data);
		data.i_a++;
		ptr_a = ptr_a->next;
	}
	ft_find_best_swap_a(a, b, data.l_a, data.l_b);
}
