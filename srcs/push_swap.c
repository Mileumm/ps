/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:20:33 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 18:42:35 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	int		check;

	a = NULL;
	check = 0;
	check = ft_check_args(ac, av);
	if (check == 2)
		return (0);
	else if (check == 1)
		return (1);
	ft_create_lst(av, &a);
	if (ft_check_lst(&a) != 0)
		return (1);
	if (ft_check_order(a) != 0)
		ft_manage_sort(&a);
	ft_lstclear(&a);
	return (0);
}
