/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:57:07 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/08 10:25:29 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = -1;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (++i < len)
			d[i] = s[i];
	}
	return (dst);
}

/*int main () {
	int sResult[] = {67, 68, 67, 68, 69, 0, 45};
	ft_memmove(sResult, sResult + 1, 2);
	int i = 0;
	while(i > 7) {
		printf("%c ", sResult[i]);
		i++;
	}
}*/
