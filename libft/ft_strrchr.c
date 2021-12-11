/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:45:41 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/04 09:39:58 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	i = ft_strlen(s);
	a = c;
	while (i >= 0)
	{
		if (s[i] == a)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
/*int main () {
	printf("%s", ft_strrchr("tripouille", 't'));
}*/
