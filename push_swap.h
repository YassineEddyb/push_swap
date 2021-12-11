/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:33:00 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 19:23:54 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

void		sa_sb(t_list **a, char c, int p);
void		ra_rb(t_list **a, char c, int p);
void		rra_rrb(t_list **a, char c, int p);
void		pb(t_list **a, t_list **b, int p);
void		pa(t_list **a, t_list **b, int p);
void		ft_sort_int_tab(int *tab, int size);
long int	get_index(int *arr, int nb);
int			get_b_or_s_number(t_list *lst, char c);
int			check_list_sort(t_list *a);
void		fill_stack(char **argv, t_list **a, int size);
int			is_numbers(char **argv, int argc);
void		sort_two_numbers(t_list **lst, char c);
int			check_doubles(char **arr, int size);
void		sort_three_numbers(t_list **lst, char c);
void		ft_printf(char *s, char c, int b);

#endif