/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:32:52 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 18:59:58 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra_i(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp_last;
	int		nb_tmp;
	int		nb_tmp2;

	if (!a || !*a)
		return ;
	tmp = ft_lstlast(*a);
	tmp_last = tmp;
	nb_tmp = tmp->content;
	nb_tmp2 = 0;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		nb_tmp2 = tmp->content;
		tmp->content = nb_tmp;
		nb_tmp = nb_tmp2;
	}
	tmp_last->content = nb_tmp;
}

void	rb_i(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp_last;
	int		nb_tmp;
	int		nb_tmp2;

	if (!b || !*b)
		return ;
	tmp = ft_lstlast(*b);
	tmp_last = tmp;
	nb_tmp = tmp->content;
	nb_tmp2 = 0;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		nb_tmp2 = tmp->content;
		tmp->content = nb_tmp;
		nb_tmp = nb_tmp2;
	}
	tmp_last->content = nb_tmp;
}

void	ra(t_list **a)
{
	ra_i(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rb_i(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra_i(a);
	rb_i(b);
	write(1, "rr\n", 3);
}
