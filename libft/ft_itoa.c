/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:58:02 by yed-dyb           #+#    #+#             */
/*   Updated: 2021/11/09 15:28:47 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long int nb)
{
	int	count;

	count = 0;
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

static void	nbr_to_str(long int nb, char *str, int len, int neg)
{
	int	i;

	i = 0;
	str[len] = '\0';
	if (nb == 0)
		str[0] = 48;
	while (nb >= 1)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	if (neg == 1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int			count;
	long int	nbr;
	char		*str;
	int			neg;

	count = 0;
	nbr = n;
	neg = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
		neg = 1;
	}
	count += count_len(nbr);
	if (nbr == 0)
		str = ft_calloc(2, sizeof(char));
	else
		str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = 48;
	nbr_to_str(nbr, str, count, neg);
	return (str);
}

/*int main () {
	printf("%s", ft_itoa(-2147483648));
}*/
