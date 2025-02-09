/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_exec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:06:13 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:06:04 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes_checker/checker.h"

int	ft_exec_cmd(char *cmd, t_list **a, t_list **b)
{
	if (ft_strncmp(cmd, "sa\n", 3) == 0)
		sa_i(a);
	else if (ft_strncmp(cmd, "sb\n", 3) == 0)
		sb_i(b);
	else if (ft_strncmp(cmd, "ss\n", 3) == 0)
		ss_i(a, b);
	else if (ft_strncmp(cmd, "pa\n", 3) == 0)
		pa_i(a, b);
	else if (ft_strncmp(cmd, "pb\n", 3) == 0)
		pb_i(a, b);
	else if (ft_strncmp(cmd, "ra\n", 3) == 0)
		ra_i(a);
	else if (ft_strncmp(cmd, "rb\n", 3) == 0)
		rb_i(b);
	else if (ft_strncmp(cmd, "rr\n", 3) == 0)
		rr_i(a, b);
	else if (ft_strncmp(cmd, "rra\n", 4) == 0)
		rra_i(a);
	else if (ft_strncmp(cmd, "rrb\n", 4) == 0)
		rrb_i(b);
	else if (ft_strncmp(cmd, "rrr\n", 4) == 0)
		rrr_i(a, b);
	else
		return (1);
	return (0);
}

int	ft_lst_cmd(t_list **a, t_list **b)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		if (ft_exec_cmd(buffer, a, b) == 1)
		{
			free(buffer);
			return (1);
		}
		free(buffer);
		buffer = get_next_line(0);
	}
	return (0);
}
