/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:58:27 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/06 20:09:43 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

int	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
		count++;
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		count += ft_putnbr_fd(nbr / 10, fd);
	count += ft_putchar_fd((char)(nbr % 10 + 48), fd);
	return (count);
}
