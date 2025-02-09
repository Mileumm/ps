/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:40:19 by tbahin            #+#    #+#             */
/*   Updated: 2025/01/02 12:07:57 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sprints(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}
