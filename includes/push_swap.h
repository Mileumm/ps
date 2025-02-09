/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:01:18 by tbahin            #+#    #+#             */
/*   Updated: 2025/02/09 17:25:04 by tbahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_swap_data
{
	int	best_score;
	int	l_a;
	int	l_b;
	int	i_a;
	int	i_b;
}		t_swap_data;

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sa_i(t_list **a);
void	sb_i(t_list **b);
void	ss_i(t_list **a, t_list **b);
void	pa_i(t_list **a, t_list **b);
void	pb_i(t_list **a, t_list **b);
void	ra_i(t_list **a);
void	rb_i(t_list **b);
void	rr_i(t_list **a, t_list **b);
void	rra_i(t_list **a);
void	rrb_i(t_list **b);
void	rrr_i(t_list **a, t_list **b);

int		ft_check_args(int ac, char **av);
void	ft_create_lst(char **av, t_list **a);
int		ft_check_lst(t_list **lst);
int		ft_check_order(t_list *lst);
void	ft_sort_three(t_list *lst);
void	ft_exec_swap(t_list **a, t_list **b, t_swap_data d);
void	ft_exec_swap_a_a(t_list **a, t_swap_data data, int m_a);
void	ft_target_b(t_list **a, t_list **b);
void	ft_target_a(t_list **a, t_list **b);
void	ft_manage_sort(t_list **a);
int		ft_check_ws(char c);
#endif