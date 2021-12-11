/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:59:19 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/08 21:00:04 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, str, i + 1);
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_remain(char *str)
{
	int		i;
	char	*remain;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	remain = malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if (!remain)
		return (NULL);
	i++;
	ft_strlcpy(remain, str + i, ft_strlen(str) - i + 1);
	free(str);
	return (remain);
}

char	*read_and_save(int fd, char *save)
{
	char	*buff;
	int		size;

	buff = malloc((3 + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	size = 1;
	while (!has_new_line(save) && size != 0)
	{
		size = read(fd, buff, 3);
		if (size == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[size] = '\0';
		save = ft_str_join(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (fd < 0)
		return (NULL);
	save = read_and_save(fd, save);
	if (!save)
		return (NULL);
	line = get_line(save);
	save = get_remain(save);
	return (line);
}

/*int main()
{
    int fd = open("./test", 2);
    int i = 0;
    while(i < 3)
    {
        printf("%s", get_next_line(fd));
        i++;
    }
}*/
