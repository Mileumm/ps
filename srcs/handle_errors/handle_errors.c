/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:06:05 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 18:29:03 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_one(char *args, int check_space, int check_digit)
{
	int	i;

	i = 0;
	while (args[i])
	{
		while (args[i] == 32 || (args[i] >= 9 && args[i] <= 13))
			i++;
		if (args[i] == '-' || args[i] == '+')
			if (!ft_isdigit(args[++i]))
				return (1);
		check_space = 0;
		while (ft_isdigit(args[i]))
		{
			i++;
			check_space++;
			check_digit++;
		}
		if (check_space > 10 || (!args[i] && !check_digit))
			return (1);
		if (!args[i] && check_digit)
			return (0);
		if (!(args[i] == 32 || (args[i] >= 9 && args[i] <= 13)))
			return (1);
	}
	return (0);
}

int	ft_check_mult(char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		if (ft_check_one(args[i], 0, 0) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_args(int ac, char **av)
{
	int	check;

	check = 0;
	if (ac < 2)
		return (2);
	else if (ac == 2)
		check = ft_check_one(av[1], 0, 0);
	else if (ac > 2)
		check = ft_check_mult(av);
	if (check == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
