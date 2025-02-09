/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:41:33 by tbahin            #+#    #+#             */
/*   Updated: 2025/01/02 12:06:53 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_hexconvert(unsigned long long int address)
{
	char					*hexnb;
	int						count;
	unsigned long long int	copy;
	char					*basehex;

	count = 0;
	copy = address;
	basehex = "0123456789abcdef";
	while (copy != 0)
	{
		copy /= 16;
		count++;
	}
	hexnb = malloc(sizeof(char) * (count + 1));
	if (!hexnb)
		return (NULL);
	hexnb[count] = '\0';
	count--;
	while (count >= 0)
	{
		hexnb[count] = basehex[address % 16];
		address /= 16;
		count--;
	}
	return (hexnb);
}

size_t	ft_pprints(void *address)
{
	char	*ptr;
	size_t	len;

	if (!address)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ptr = ft_hexconvert((unsigned long long int)address);
	if (!ptr)
		return (0);
	len = ft_strlen(ptr);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(ptr, 1);
	free(ptr);
	return (len + 2);
}
