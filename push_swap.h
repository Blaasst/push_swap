/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:20:43 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/23 12:24:24 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_stack
{
	int				val;
	int				rank;
	char			*binaire;
	struct s_stack	*next;
}				t_stack;


void	del(t_stack *node);
int		*fill_tab(char	**argv, int size);
int		ft_duplicate(int *tab, int size);
t_stack	**fill_stack(t_stack	**top, int *tab, int size);
int		ft_atoi(const char *nptr);
int		valid_int(char	*nptr);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		find_max(t_stack	*b);
void	put_top_b(t_stack	**b, int max);

#endif
