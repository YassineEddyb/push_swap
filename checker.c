/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:00:36 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 12:26:39 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **a, t_list **b)
{
	sa_sb(a, 'a', 0);
	sa_sb(b, 'b', 0);
}

void	rr(t_list **a, t_list **b)
{
	ra_rb(a, 'a', 0);
	ra_rb(b, 'b', 0);
}

void	rrr(t_list **a, t_list **b)
{
	rra_rrb(a, 'a', 0);
	rra_rrb(b, 'b', 0);
}

void	do_action(t_list **a, t_list **b, char *s)
{
	if (!ft_strncmp("sa\n", s, ft_strlen(s)))
		sa_sb(a, 'a', 0);
	else if (!ft_strncmp("sb\n", s, ft_strlen(s)))
		sa_sb(b, 'b', 0);
	else if (!ft_strncmp("ss\n", s, ft_strlen(s)))
		ss(a, b);
	else if (!ft_strncmp("pa\n", s, ft_strlen(s)))
		pa(a, b, 0);
	else if (!ft_strncmp("pb\n", s, ft_strlen(s)))
		pb(a, b, 0);
	else if (!ft_strncmp("ra\n", s, ft_strlen(s)))
		ra_rb(a, 'a', 0);
	else if (!ft_strncmp("rb\n", s, ft_strlen(s)))
		ra_rb(b, 'b', 0);
	else if (!ft_strncmp("rr\n", s, ft_strlen(s)))
		rr(a, b);
	else if (!ft_strncmp("rra\n", s, ft_strlen(s)))
		rra_rrb(a, 'a', 0);
	else if (!ft_strncmp("rrb\n", s, ft_strlen(s)))
		rra_rrb(b, 'b', 0);
	else if (!ft_strncmp("rrr\n", s, ft_strlen(s)))
		rrr(a, b);
	free(s);
}

int	main(int argc, char **argv)
{
	char	*line;
	t_list	*a;
	t_list	*b;

	argv++;
	if (argc == 1 || !is_numbers(argv, argc - 1) \
		|| !check_doubles(argv, argc - 1))
		return (0);
	fill_stack(argv, &a, argc - 1);
	line = get_next_line(0);
	while (line)
	{
		do_action(&a, &b, line);
		line = get_next_line(0);
	}
	if (check_list_sort(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (1);
}
