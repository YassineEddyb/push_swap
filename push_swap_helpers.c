/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:18:07 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/09 18:38:06 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				tmp = tab[a];
				tab[a] = tab[b];
				tab[b] = tmp;
			}
			b++;
		}
		a++;
	}
}

long	get_index(int *arr, int nb)
{
	long	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i] != nb)
		i++;
	return (i);
}

int	get_b_or_s_number(t_list *lst, char c)
{
	int	nb;

	nb = (int) lst->content;
	while (lst)
	{
		if (c == 'b')
		{
			if ((int) lst->content > nb)
				nb = (int) lst->content;
		}
		else if (c == 's')
		{
			if ((int) lst->content < nb)
				nb = (int) lst->content;
		}
		lst = lst->next;
	}
	return (nb);
}

void	fill_stack(char **argv, t_list **a, int size)
{
	int			i;
	long int	nb;

	i = 0;
	while (i < size)
	{
		nb = ft_atoi(argv[i + 1]);
		ft_lstadd_back(a, ft_lstnew((void *) nb));
		i++;
	}
}

int	check_list_sort(t_list *a)
{
	int	nb;

	nb = (int)a->content;
	a = a->next;
	while (a)
	{
		if (nb > (int)a->content)
			return (0);
		nb = (int)a->content;
		a = a->next;
	}
	return (1);
}
