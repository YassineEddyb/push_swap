/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:20:29 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/11 12:58:07 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((unsigned char *)b)[i] = c;
	return (b);
}

/*int main () {
	char t1[] = "hello";
	char t2[] = "hello";
	char *s1 = ft_memset(t1, 0, 3);
	//char *s2 = memset(t2, , 3);
	printf("%s",s1);
}*/
