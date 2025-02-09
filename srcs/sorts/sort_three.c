/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:57:26 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 03:39:53 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_three_1(int nb, int nb2, int nb3, t_list *lst)
{
	if (nb > nb2 && nb2 < nb3 && nb < nb3)
		sa(&lst);
	else if (nb > nb2 && nb2 > nb3)
	{
		sa(&lst);
		rra(&lst);
	}
	else if (nb < nb2 && nb2 > nb3 && nb < nb3)
	{
		rra(&lst);
		sa(&lst);
	}
}

void	ft_sort_three_2(int nb, int nb2, int nb3, t_list *lst)
{
	if (nb > nb2 && nb2 < nb3 && nb > nb3)
		ra(&lst);
	else if (nb < nb2 && nb2 > nb3 && nb > nb3)
		rra(&lst);
}

void	ft_sort_three(t_list *lst)
{
	int	nb;
	int	nb2;
	int	nb3;

	nb = lst->content;
	nb2 = lst->next->content;
	nb3 = lst->next->next->content;
	if (nb > nb2 && nb2 < nb3 && nb < nb3)
		ft_sort_three_1(nb, nb2, nb3, lst);
	else if (nb > nb2 && nb2 > nb3)
		ft_sort_three_1(nb, nb2, nb3, lst);
	else if (nb < nb2 && nb2 > nb3 && nb < nb3)
		ft_sort_three_1(nb, nb2, nb3, lst);
	else if (nb > nb2 && nb2 < nb3 && nb > nb3)
		ft_sort_three_2(nb, nb2, nb3, lst);
	else if (nb < nb2 && nb2 > nb3 && nb > nb3)
		ft_sort_three_2(nb, nb2, nb3, lst);
}
