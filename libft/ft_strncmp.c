/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:11:15 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/08 10:34:22 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		a;
	int		b;

	i = 0;
	while (i < n)
	{
		a = (unsigned char) s1[i];
		b = (unsigned char) s2[i];
		if (a != b || !a || !b)
			return (a - b);
		i++;
	}
	return (0);
}
