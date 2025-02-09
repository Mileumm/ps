/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:43 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:02:47 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa_i(t_list **a, t_list **b)
{
	t_list	*ptr;

	ptr = NULL;
	if (b && *b && !*a)
	{
		*a = *b;
		*b = (*b)->next;
		(*b)->prev = NULL;
		(*a)->next = NULL;
		(*a)->prev = NULL;
	}
	else if (b && *b)
	{
		ptr = *a;
		(*a)->prev = *b;
		*a = (*a)->prev;
		*b = (*b)->next;
		(*a)->next = ptr;
		(*a)->prev = NULL;
		if (*b)
			(*b)->prev = NULL;
	}
}

void	pb_i(t_list **a, t_list **b)
{
	t_list	*ptr;

	ptr = NULL;
	if (a && *a && !*b)
	{
		*b = *a;
		*a = (*a)->next;
		(*a)->prev = NULL;
		(*b)->next = NULL;
		(*b)->prev = NULL;
	}
	else if (a && *a)
	{
		ptr = *b;
		(*b)->prev = *a;
		*b = (*b)->prev;
		*a = (*a)->next;
		(*b)->prev = NULL;
		(*b)->next = ptr;
		if (*a)
			(*a)->prev = NULL;
	}
}

void	pa(t_list **a, t_list **b)
{
	pa_i(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	pb_i(a, b);
	write(1, "pb\n", 3);
}
