/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_outils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:58:08 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:05:20 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes_checker/checker.h"

void	ft_create_checkerlst(char **av, t_list **a)
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
