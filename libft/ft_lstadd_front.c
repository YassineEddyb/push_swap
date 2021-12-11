/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:19:43 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/05 11:23:13 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main () {
	t_list *lst;
	lst = malloc(sizeof(t_list));
	lst->content = "test2";
	lst->next = NULL;
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = "test1";
	new->next = NULL;
	ft_lstadd_front(&lst, new);
	printf("%s\n%s", lst->content, lst->next->content);
}*/
