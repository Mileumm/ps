/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:54:23 by tbahin            #+#    #+#             */
/*   Updated: 2025/01/22 12:47:08 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	if (ptr)
	{
		i++;
		while (ptr->next)
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
