/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 03:29:42 by theo              #+#    #+#             */
/*   Updated: 2025/02/09 12:20:23 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_limits(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next)
	{
		if (ptr->content > 2147483647 || ptr->content < -2147483648)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

int	ft_check_double(t_list *lst)
{
	t_list	*ptr;
	t_list	*ptr2;
	int		tmp;

	ptr = lst;
	ptr2 = lst;
	tmp = 0;
	while (ptr->next)
	{
		tmp = ptr->content;
		ptr2 = ptr->next;
		while (ptr2)
		{
			if (tmp == ptr2->content)
				return (1);
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
	return (0);
}

int	ft_check_lst(t_list **lst)
{
	int	check;

	check = 0;
	if (!*lst)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	check += ft_check_double(*lst);
	check += ft_check_limits(*lst);
	if (check != 0)
	{
		write(2, "Error\n", 6);
		ft_lstclear(lst);
		return (1);
	}
	return (0);
}
