/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:25:50 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/09 18:39:53 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft/libft.h"
# include<stdlib.h>
# include<unistd.h>

char	*ft_str_join(char *s1, char *s2);
int		has_new_line(char *s);
char	*get_next_line(int fd);

#endif
