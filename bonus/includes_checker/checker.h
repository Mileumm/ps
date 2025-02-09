/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:59:28 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 19:06:23 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../includes/push_swap.h"
# include "../../libft/libft.h"

void	ft_create_checkerlst(char **av, t_list **a);
int		ft_lst_cmd(t_list **a, t_list **b);

#endif