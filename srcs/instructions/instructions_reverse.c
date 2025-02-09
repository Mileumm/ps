/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:33:32 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:03:02 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra_i(t_list **a)
{
	t_list	*tmp;
	int		nb_tmp;
	int		nb_tmp2;

	if (!a || !*a)
		return ;
	tmp = *a;
	nb_tmp = tmp->content;
	nb_tmp2 = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		nb_tmp2 = tmp->content;
		tmp->content = nb_tmp;
		nb_tmp = nb_tmp2;
	}
	(*a)->content = nb_tmp2;
}

void	rrb_i(t_list **b)
{
	t_list	*tmp;
	int		nb_tmp;
	int		nb_tmp2;

	if (!b || !*b)
		return ;
	tmp = *b;
	nb_tmp = tmp->content;
	nb_tmp2 = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		nb_tmp2 = tmp->content;
		tmp->content = nb_tmp;
		nb_tmp = nb_tmp2;
	}
	(*b)->content = nb_tmp2;
}

void	rra(t_list **a)
{
	rra_i(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	rrb_i(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra_i(a);
	rrb_i(b);
	write(1, "rrr\n", 4);
}
