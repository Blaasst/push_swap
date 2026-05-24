/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:20:43 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/24 11:02:28 by edemay           ###   ########.fr       */
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
typedef struct s_type
{
	int	start;
	int	type;
	int	bench;
}				t_type;
typedef struct s_count
{
	double	disorder;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	char	*strategy;
	int		total_ops;
}			t_count;

typedef struct s_ops
{
	int				code;
	struct s_ops	*next;
}				t_ops;

typedef struct s_data
{
	t_stack	**a;
	t_stack	**b;
	t_ops	*ops;
}				t_data;


int		*fill_tab(char	**argv, int size, int i);
int		ft_duplicate(int *tab, int size);
double	disorder(char **argv, int argc, t_type *type);
t_stack	**fill_stack(t_stack	**top, int *tab, int size);
int		ft_atoi(const char *nptr);
int		valid_int(char	*nptr);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
int		find_max(t_stack	*b);
void	put_top_b(t_stack	**b, int max);
int		count_total(t_ops	**ops, t_count *count);
void	count_sub(t_ops	**ops, t_count *count);
void	ft_count(t_ops	**ops, t_count *count);
void	algo_simple(t_data *data);
void	algo_medium(t_data *data, int size, int *tab);
void	algo_complex(t_data *data, int size, int *tab);
int		*sort_tab(int *tab, int size);
void	rank_stack(t_stack **a, int *tab_temp);
void	index(int *tab, t_stack **a, int size);
void	benchmark(t_ops **ops, char **argv, int argc, t_type *type);

#endif
