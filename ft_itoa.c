/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:35:44 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/28 18:25:14 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_protect(char *str, int n)
{
	if (!n)
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	return (0);
}

static char	*ft_25max(int n, int i, char *str, int sign)
{
	int	max;
	int	nbr;

	nbr = n;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
		max = i - 1;
		str = malloc(i + 1 * 1);
	if (!str)
		return (0);
	if (sign == 1)
		str[0] = '-';
	i = max;
	while (n > 9)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i] = n + '0';
	str[max + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	str = NULL;
	str = ft_protect(str, n);
	if (str != NULL)
		return (str);
	if (n < 0)
	{
		i = 2;
		n *= -1;
		sign = 1;
	}
	else
	{
		i = 1;
		sign = 0;
	}
	str = ft_25max(n, i, str, sign);
	return (str);
}

/*int main(void)
{
	char *i1 = ft_itoa(-623);
	char *i2 = ft_itoa(156);
	char *i3 = ft_itoa(-0);
	printf("%d\n", strcmp(i1, -623));
	printf("%d\n", strcmp(i2, 156));
	printf("%d\n", strcmp(i3, -0));
  printf("%s\n",ft_itoa(0));
}*/	