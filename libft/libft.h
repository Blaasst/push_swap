/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:55:09 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 14:51:03 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <ctype.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>
# include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst, void (*del)(void *));
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_lstnew(void *content);
int		ft_lstsize(t_stack *lst);
size_t	ft_strlen(const char *c);
int		print_nil(void);
int		print_null(void);
int		print_char(int n);
int		print_decimal(int n);
int		print_hexa_low(unsigned int n);
int		print_hexa_up(unsigned int n);
int		print_pointer(long long unsigned n);
int		print_string(char *n);
int		print_unsigned_int(unsigned int n);
int		print_double(double n);
int		ft_printf(const char *sentence, ...);
int		prnt(const char *sentence, int i, va_list string, int count);
void	ft_lstadd_back_ops(t_ops **lst, t_ops *new);
void	ft_lstadd_front_ops(t_ops **lst, t_ops *new);
void	ft_lstclear_ops(t_ops **lst);
t_ops	*ft_lstlast_ops(t_ops *lst);
t_ops	*ft_lstnew_ops(void *value);
int		ft_lstsize_ops(t_ops *lst);
void	ft_lstclear_data(t_data **lst);
int		nbr_len(int n);
size_t	ft_argvlen(char **c);

#endif
