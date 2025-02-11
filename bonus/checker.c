/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:24:16 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/11 12:07:35 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes_checker/checker.h"

int	ft_checker(int ac, char **av, t_list **a)
{
	int		check;

	check = 0;
	check = ft_check_args(ac, av);
	if (check == 2)
		return (0);
	else if (check == 1)
		return (1);
	ft_create_checkerlst(av, a);
	if (ft_check_lst(a) != 0)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (1);
	if (ft_checker(ac, av, &a) == 1)
		return (1);
	if (ft_lst_cmd(&a, &b) == 1)
	{
		write(2, "Error\n", 6);
		ft_lstclear(&a);
		ft_lstclear(&b);
		return (1);
	}
	if (ft_check_order(a) == 0 && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}
