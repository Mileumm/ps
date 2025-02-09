/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_swap_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:25:01 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 03:29:40 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_exec_swap_a_b(t_list **b, t_swap_data data, int m_b)
{
	if (data.i_b <= m_b && data.i_b > 0)
	{
		while (data.i_b > 0)
		{
			rb(b);
			data.i_b--;
		}
	}
	else if (data.i_b > m_b && data.i_b < data.l_b)
	{
		while (data.i_b < data.l_b)
		{
			rrb(b);
			data.i_b++;
		}
	}
}

void	ft_exec_swap_a_a(t_list **a, t_swap_data data, int m_a)
{
	if (data.i_a <= m_a && data.i_a > 0)
	{
		while (data.i_a > 0)
		{
			ra(a);
			data.i_a--;
		}
	}
	else if (data.i_a > m_a && data.i_a < data.l_a)
	{
		while (data.i_a < data.l_a)
		{
			rra(a);
			data.i_a++;
		}
	}
}

void	ft_exec_swap(t_list **a, t_list **b, t_swap_data d)
{
	int	m_a;
	int	m_b;

	m_a = d.l_a / 2;
	m_b = d.l_b / 2;
	if ((d.i_a > 0 && d.i_a <= d.l_a) || (d.i_b > 0 && d.i_b <= d.l_b))
	{
		while (d.i_a <= m_a && d.i_b <= m_b && d.i_a > 0 && d.i_b > 0)
		{
			rr(a, b);
			d.i_a--;
			d.i_b--;
		}
		while (d.i_a > m_a && d.i_b > m_b && d.i_a < d.l_a && d.i_b < d.l_b)
		{
			rrr(a, b);
			d.i_a++;
			d.i_b++;
		}
		ft_exec_swap_a_a(a, d, m_a);
		ft_exec_swap_a_b(b, d, m_b);
	}
	pb(a, b);
}
