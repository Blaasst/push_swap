/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:55:09 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 10:17:20 by jait-ame         ###   ########.fr       */
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

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst, void (*del)(void *));
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_lstnew(void *content);
int		ft_lstsize(t_stack *lst);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
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
