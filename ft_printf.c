/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:29:07 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/21 15:29:07 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	if (format == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	if (format == 'p')
		count += ft_printpoint(va_arg(args, t_ull));
	if (format == 'i' || format == 'd')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	if (format == 'u')
		count += ft_unsigned_putnbr(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		count += ft_printhex(va_arg(args, unsigned int), format);
	if (format == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_formats(ap, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end (ap);
	return (count);
}
