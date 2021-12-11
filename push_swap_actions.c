/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:58:21 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 19:26:21 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_list **a, char c, int p)
{
	t_list	*tmp;

	if (p)
		ft_printf("r", c, 1);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
}

void	rra_rrb(t_list **a, char c, int p)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*head;

	if (p)
		ft_printf("rr", c, 1);
	head = *a;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
}

void	pb(t_list **a, t_list **b, int p)
{
	t_list	*tmp;

	if (p)
		ft_printf("pb", ' ', 0);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp);
}

void	pa(t_list **a, t_list **b, int p)
{
	t_list	*tmp;

	if (p)
		ft_printf("pa", ' ', 0);
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp);
}

void	sa_sb(t_list **a, char c, int p)
{
	t_list	*tmp;

	if (p)
		ft_printf("s", c, 1);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}
