/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:20:43 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/28 12:41:20 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	int				val;
	int				rank;
	int				*binaire;
	struct s_stack	*next;
}				t_stack;
typedef struct s_type
{
	int	start;
	int	type;
	int	bench;
	int	adaptive;
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
void	ft_print_ops(t_ops *ops);
int		find_max(t_stack	*b);
void	put_top_b(t_data *data, int max);
void	count_total(t_ops	**ops, t_count *count);
void	count_sub(t_ops	**ops, t_count *count);
void	ft_count(t_ops	**ops, t_count *count);
void	algo_simple(t_data *data);
void	algo_medium(t_data *data, int size, int *tab);
void	algo_complex(t_data *data, int size, int *tab);
int		*sort_tab(int *tab, int size);
void	rank_stack(t_stack **a, int *tab_temp);
void	indexer(int *tab, t_stack **a, int size);
void	benchmark(t_ops **ops, char **argv, int argc, t_type *type);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int value);
int		ft_lstsize(t_stack *lst);
size_t	ft_strlen(const char *c);
int		print_nil(void);
int		print_null(void);
int		print_char(int n);
int		print_decimal(int n);
int		print_pointer(long long unsigned n);
int		print_string(char *n);
int		print_hexa_low(unsigned int n);
int		print_hexa_up(unsigned int n);
int		print_unsigned_int(unsigned int n);
int		print_double(double n);
int		ft_printf(const char *sentence, ...);
void	ft_lstadd_back_ops(t_ops **lst, t_ops *new);
void	ft_lstadd_front_ops(t_ops **lst, t_ops *new);
void	ft_lstclear_ops(t_ops **lst);
t_ops	*ft_lstlast_ops(t_ops *lst);
t_ops	*ft_lstnew_ops(int value);
int		ft_lstsize_ops(t_ops *lst);
void	ft_lstclear_data(t_data *lst);
int		ft_argvlen(char **c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
// void	ft_alloc(t_data *data, t_type *type, t_stack *top_a, t_stack *top_b);
void	ft_free(t_data *data, t_type *type, int *tab);
void	ft_end(int *tab, t_data *data, t_type *type);

#endif
