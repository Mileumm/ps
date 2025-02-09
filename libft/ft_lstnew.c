/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:40:40 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 02:11:35 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list		*up;
	t_target	*data;

	up = (t_list *)malloc(sizeof(t_list));
	data = (t_target *)malloc(sizeof(t_target));
	if (!up || !data)
		return (NULL);
	up->content = content;
	up->data = data;
	up->next = NULL;
	up->prev = NULL;
	return (up);
}
