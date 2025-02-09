/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:51:02 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:10:30 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

long int	ft_atol(const char *nptr)
{
	int			sign;
	long int	nb;
	int			i;

	sign = 1;
	nb = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		nb = nb * 10 + nptr[i] - 48;
		i++;
	}
	return (nb * sign);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	else
		printf("%d", ft_atoi((const char *)av[1]));
	return (0);
}*/
