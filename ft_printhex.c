/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:46:41 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/06 20:22:43 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long nbr, char c)
{
	int				count;
	char			*hex;
	char			*hex_high;

	hex = "0123456789abcdef";
	hex_high = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_printhex(nbr / 16, c);
		count += ft_printhex(nbr % 16, c);
	}
	else if (nbr < 16)
	{
		if (c == 'x')
			count += ft_putchar_fd((char)(hex[nbr]), 1);
		if (c == 'X')
			count += ft_putchar_fd((char)(hex_high[nbr]), 1);
	}
	return (count);
}
