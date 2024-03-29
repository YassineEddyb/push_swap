/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:15:46 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 13:06:30 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_list **a, t_list **b, int size)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;

	max_bits = 0;
	if (check_list_sort(*a))
		return ;
	max_num = get_b_or_s_number(*a, 'b');
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if (*a && (((int)(*a)->content >> i) & 1) == 1)
				ra_rb(a, 'a', 1);
			else
				pb(a, b, 1);
		}
		while (*b)
			pa(a, b, 1);
	}
}

void	sort_small_stack(t_list **a, t_list **b, int size)
{
	while (size > 3)
	{
		if (size && (int)(*a)->content == get_b_or_s_number(*a, 's'))
		{
			pb(a, b, 1);
			size--;
		}
		else
			ra_rb(a, 'a', 1);
	}
	if (ft_lstsize(*a) == 3)
		sort_three_numbers(a, 'a');
	else if (ft_lstsize(*a) == 2)
		sort_two_numbers(a, 'a');
	if (ft_lstsize(*b) == 3)
	{
		sort_three_numbers(b, 'b');
		sa_sb(b, 'b', 1);
		rra_rrb(b, 'b', 1);
	}
	else if (ft_lstsize(*b) == 2)
		sort_two_numbers(b, 'b');
	while (*b)
		pa(a, b, 1);
}

void	fill_and_sort_big_stack(t_list **a, t_list **b, char **argv, int size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(size * sizeof(int));
	while (i < size)
	{
		arr[i] = ft_atoi(argv[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_sort_int_tab(arr, size);
		ft_lstadd_back(a, ft_lstnew((void *) \
		get_index(arr, ft_atoi(argv[i]))));
		i++;
	}
	sort_big_stack(a, b, size);
	free(arr);
}

void	sort_stack(t_list **a, t_list **b, char **argv, int size)
{
	if (size < 7)
	{
		fill_stack(argv, a, size);
		if (check_list_sort(*a))
			return ;
		sort_small_stack(a, b, size);
	}
	else if (size >= 7)
	{
		fill_and_sort_big_stack(a, b, argv, size);
	}
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	argv++;
	if (argc == 1 || !is_numbers(argv, argc - 1) \
		|| !check_doubles(argv, argc - 1))
		return (0);
	sort_stack(&a, &b, argv, argc - 1);
	return (1);
}
