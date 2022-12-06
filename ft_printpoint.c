/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:07:13 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/06 20:30:20 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(t_ull n)
{
	int	count;

	count = 0;
	if (!n)
		return (ft_putstr_fd("(nil)", 1));
	count += ft_putstr_fd("0x", 1);
	count += ft_printhex(n, 'x');
	return (count);
}
