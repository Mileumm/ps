/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:59:52 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:00:46 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa_i(t_list **a)
{
	int	tmp;

	if (!a || !*a || !(*a)->next)
		return ;
	tmp = (*a)->next->content;
	(*a)->next->content = (*a)->content;
	(*a)->content = tmp;
}

void	sb_i(t_list **b)
{
	int	tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	tmp = (*b)->next->content;
	(*b)->next->content = (*b)->content;
	(*b)->content = tmp;
}

void	sa(t_list **a)
{
	sa_i(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	sb_i(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa_i(a);
	sb_i(b);
	write(1, "ss\n", 3);
}
