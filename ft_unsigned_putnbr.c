/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:08:29 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/01 18:08:29 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

void	ft_unsigned_putnbr(unsigned int nb)
{
	unsigned int	nbr;

	nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_unsigned_putnbr(nbr / 10);
	ft_putchar_fd((char)(nbr % 10 + 48), 1);
}
