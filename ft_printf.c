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

void	ft_putchar_final(int fd, char c, int size)
{
	write(fd, &c, size);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

int	ft_formats(va_list args, const char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		ft_putchar_final(1, va_arg(args, int), 1);
	if (format == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	//if (format == 'p')
	//if (format == 'd')
	if (format == 'i' || format == 'd')
		ft_printnbr(va_arg(args, int));
	//if (format == 'u')
	//if (format == 'x')
	//if (format == 'X')
	if (format == '%')
		write(1, "%", 1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while (str[i])//Placeholder it will need to be While to check for percentage not only on the beginning of the word
	{
		if (str[i] == '%')
			ft_formats(ap, str[i + 1]); //Placeholder It will need a value to count how much character it is printing
		i++;
	}
	va_end (ap);
	return (i); //Placeholder
}

int main (void)
{
	char ch = 'H';
	char *str = "Hello";
	int i = -100;
	int d = 50;
 	ft_printf("%c", ch);
	printf(" - %%c\n");
	ft_printf("%s", str);
	printf(" - %%s\n");
	ft_printf("%i", i);
	printf(" - %%i\n");
	ft_printf("%%s dhgg", str);
	printf(" - %%\n");
	ft_printf("%d");
	printf(" - %%d\n");

  return 0;
}