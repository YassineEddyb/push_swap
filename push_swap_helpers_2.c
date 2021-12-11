/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:20:16 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 19:31:44 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numbers(char **argv, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '-' && (argv[i][j] < '0' || argv[i][j] > '9'))
			{
				ft_printf("Error", ' ', 0);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	sort_two_numbers(t_list **lst, char c)
{
	if (c == 'b')
	{
		if ((int)(*lst)->content < (int)(*lst)->next->content)
			sa_sb(lst, c, 1);
	}
	else if (c == 'a')
	{
		if ((int)(*lst)->content > (int)(*lst)->next->content)
			sa_sb(lst, c, 1);
	}
}

int	check_doubles(char **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (ft_atoi(arr[i]) > 2147483647 || ft_atoi(arr[i]) < -2147483648)
		{
			ft_printf("Error", ' ', 0);
			return (0);
		}
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
			{
				ft_printf("Error", ' ', 0);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	sort_three_numbers(t_list **lst, char c)
{
	int	f;
	int	m;
	int	l;

	f = (int)(*lst)->content;
	m = (int)(*lst)->next->content;
	l = (int)(*lst)->next->next->content;
	if (f > m && f < l)
		sa_sb(lst, c, 1);
	else if (f > m && f > l && m < l)
		ra_rb(lst, c, 1);
	else if (f < m && f > l && m > l)
		rra_rrb(lst, c, 1);
	else if (f > m && f > l && m > l)
	{
		sa_sb(lst, c, 1);
		rra_rrb(lst, c, 1);
	}
	else if (f < m && f < l && m > l)
	{
		sa_sb(lst, c, 1);
		ra_rb(lst, c, 1);
	}
}

void	ft_printf(char *s, char c, int b)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	if (b)
		write(1, &c, 1);
	write(1, "\n", 1);
}
