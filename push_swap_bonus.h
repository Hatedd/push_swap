/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:42 by yobenali          #+#    #+#             */
/*   Updated: 2022/06/01 21:41:37 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "gnl_ps/get_next_line.h"

typedef struct s_data {
	char	*tab;
	char	**ptr;
	int		*offset;
	int		*start;
	int		*end;
	int		*down;
	int		*count;
	int		*b_count;
	int		*first_in;
	int		*a;
	int		*b;
	int		*sorted;
	int		*mid;
}				t_data;

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strdup(char *s1);
char	**ft_split(char *s, char c);
char	*ft_strchr(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void	*s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_sort_int_tab(t_data *data, int size);
void	ft_push(int *from, int *to, int *from_count, int *to_count);
void	sel_push(t_data *data, char c);
void	sel_rotate(t_data *data, char c);
void	sel_rev_rotate(t_data *data, char c);
void	sel_swap(t_data *data, char c);
void	ft_swap(int *stack);
void	ft_rotate(int *stack, int *count);
void	ft_rev_rotate(int *stack, int *count);
void	check_dup(t_data *data);
void	ft_select(t_data *data, int loc);
void	ft_five(t_data *data);
void	ft_four(t_data *data);
void	low_sort(t_data *data);
void	simple_sort(t_data *data);
void	lifo(t_data *data, int i);
void	push_first(t_data *data);
void	check_big2(t_data *data);
void	check_big(t_data *data);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		biggest_value(t_data *data);
int		ft_offset(t_data *data);
int		check_lower(t_data *data);
int		ft_sorted(t_data *data);
int		bigger(t_data *data);
int		ft_strlen(char *str);

#endif
