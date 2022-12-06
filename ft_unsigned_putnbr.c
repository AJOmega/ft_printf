/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:58:18 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/06 20:32:00 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int nb)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	nbr = (unsigned int)nb;
	if (nbr >= 10)
		count += ft_unsigned_putnbr(nbr / 10);
	count += ft_putchar_fd((char)(nbr % 10 + 48), 1);
	return (count);
}
