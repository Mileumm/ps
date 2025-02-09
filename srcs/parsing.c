/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:25:30 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 02:18:25 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_ws(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (0);
	return (1);
}

void	ft_create_lst(char **av, t_list **a)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (av[x])
	{
		while (y < (int)ft_strlen(av[x]))
			ft_lstadd_back(a, ft_lstnew(ft_natol(av[x], &y)));
		y = 0;
		x++;
	}
}
