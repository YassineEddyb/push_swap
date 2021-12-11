/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:17:08 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/12/10 11:07:26 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoi(const char *str)
{
	int			sign;
	long long	nbr;
	int			i;
	int			count;

	i = 0;
	sign = 1;
	nbr = 0;
	count = 0;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i] - '0') + (nbr * 10);
		i++;
		count++;
	}
	return (nbr * sign);
}

/*int	main()
{
	printf ("%d\n", ft_atoi("9223372036854775804"));
	printf ("%d\n", atoi("9223372036854775804"));
}*/
