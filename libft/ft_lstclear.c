/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:37:20 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:11:01 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*ptr;
	t_list	*temp;

	ptr = *lst;
	temp = NULL;
	while (ptr)
	{
		temp = ptr->next;
		free(ptr->data);
		free(ptr);
		ptr = temp;
	}
}
