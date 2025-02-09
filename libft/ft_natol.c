/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:51:02 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:47:24 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

long int	ft_natol(const char *nptr, int *i)
{
	int			sign;
	long int	nb;

	sign = 1;
	nb = 0;
	while (nptr[*i] == 32 || (nptr[*i] >= 9 && nptr[*i] <= 13))
		(*i)++;
	if (nptr[*i] == '+' || nptr[*i] == '-')
	{
		if (nptr[*i] == '-')
			sign = -1;
		(*i)++;
	}
	while (nptr[*i] <= '9' && nptr[*i] >= '0')
	{
		nb = nb * 10 + nptr[*i] - 48;
		(*i)++;
	}
	while (nptr[*i] == 32 || (nptr[*i] >= 9 && nptr[*i] <= 13))
		(*i)++;
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
