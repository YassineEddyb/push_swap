/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:02:34 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/08 20:50:19 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	j = 0;
	while (++i < s1_len)
		str[i] = s1[i];
	i--;
	while (i++ < (s1_len + s2_len))
		str[i] = s2[j++];
	str[i] = '\0';
	return (str);
}

/*int main () {
	printf("%s", ft_strjoin("", "42"));
}*/
