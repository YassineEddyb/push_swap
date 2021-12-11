/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibnada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:02:57 by ibnada            #+#    #+#             */
/*   Updated: 2021/11/11 12:28:37 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static void	free_arr(char **arr, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		free(arr[j]);
		j++;
	}
}

static char	*cpy_word(char *str, const char *s, int i, int len)
{
	int	j;

	j = 0;
	str = malloc((len - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + i, len - i + 1);
	return (str);
}

static int	cpy_words(char **arr, const char *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		len = i;
		while (s[len] && s[len] != c)
			len++;
		if (s[i] && s[i] != c)
		{
			arr[j] = cpy_word(arr[j], s, i, len);
			if (!arr[j])
				return (0);
			j++;
		}
		i = len;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		free;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((count_words(s, c) + 1), sizeof (char *));
	if (!arr)
		return (NULL);
	free = cpy_words(arr, s, c);
	if (!free)
	{
		free_arr(arr, count_words(s, c));
		return (NULL);
	}
	return (arr);
}

/*int main () {
	char **arr;
	arr = ft_split("      split       this for   me  !", ' ');
	int i = 0;
	while(i < 3)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}*/
