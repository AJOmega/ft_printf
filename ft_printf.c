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

int	ft_formats(va_list args, const char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		ft_putchar_final(1, va_arg(args, int), 1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	if (str[i] == '%' && str[i + 1] == 'c')
		{
			//ft_putchar_final(1, ap, 1);
			ft_formats(ap, str[i + 1]);
		}
	va_end (ap);
	return (i); //Placeholder
}

/*int add_em_up (int args, ...)
{
  va_list ap;
  int i, sum;

  va_start (ap, args);         Initialize the argument list.

  sum = 0;
  for (i = 0; i < args; i++)
    sum += va_arg (ap, int);    Get the next argument value. 

  va_end (ap);                   Clean up.
  return sum;
}*/

int main (void)
{
  /* This call prints 16.
  printf ("%d\n", add_em_up (3, 5, 5, 6));

   This call prints 55.
  printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
  */
 	char str = 'H';
 	ft_printf("%c", str);
	printf("\n");

  return 0;
}