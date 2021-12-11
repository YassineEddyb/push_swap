/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:36:26 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/06 16:03:33 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}	
	return (tmp);
}

/*int main () {
	t_list *head;
	head = malloc(3 * sizeof(t_list));
	head->content = "first";
	head->next = ft_lstnew("second");
	head->next->next = ft_lstnew("third");
	head->next->next->next = NULL;

	t_list *l = NULL;
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	printf("%d", (int)ft_lstlast(l)->content);
}*/
