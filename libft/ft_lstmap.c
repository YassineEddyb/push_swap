/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:58:29 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/06 18:39:58 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	head = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}

/*void del(void *lst) {}

void *toTest(void *lst) {
	((t_list *)lst)->content = "test";
	return (lst);
}

int main () {
	t_list *head;
	head = malloc(3 * sizeof(t_list));
	head->content = "first";
	head->next = ft_lstnew("second");
	head->next->next = ft_lstnew("third");
	head->next->next->next = NULL;

	t_list *lst = ft_lstmap(head, toTest, del);
	while (head) {
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
