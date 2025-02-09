/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:15:45 by tbahin            #+#    #+#             */
/*   Updated: 2025/01/02 12:05:52 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_iprints(int nb)
{
	char	*number;
	size_t	len;

	number = ft_itoa(nb);
	ft_putstr_fd(number, 1);
	len = ft_strlen(number);
	free(number);
	return (len);
}
