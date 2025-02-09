/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upxprints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:45 by tbahin            #+#    #+#             */
/*   Updated: 2025/01/02 12:08:42 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long long number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		number /= 16;
		i++;
	}
	return (i);
}

static char	*ft_hexconvert(long long number)
{
	char	*hexnb;
	int		count;
	char	*basehex;

	count = 0;
	basehex = "0123456789ABCDEF";
	if (number < 0)
		number += 4294967296;
	count = ft_len(number);
	hexnb = malloc(sizeof(char) * (count + 1));
	if (!hexnb)
		return (NULL);
	hexnb[count] = '\0';
	count--;
	while (count >= 0)
	{
		hexnb[count] = basehex[number % 16];
		number /= 16;
		count--;
	}
	return (hexnb);
}

int	ft_upxprints(int number)
{
	size_t	len;
	char	*ptr;

	if (number == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	ptr = ft_hexconvert((long long)number);
	if (!ptr)
		return (0);
	len = ft_strlen(ptr);
	ft_putstr_fd(ptr, 1);
	free(ptr);
	return ((int)len);
}
