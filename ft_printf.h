/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:30:19 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/06 20:28:40 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
//# include "Libft/libft.h"
typedef unsigned long long	t_ull;

int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int nb, int fd);
size_t	ft_strlen(const char *str);
int		ft_unsigned_putnbr(unsigned int nb);
size_t	ft_putstr_fd(char *s, int fd);
int		ft_printhex(unsigned long nbr, char c);
int		ft_printpoint(t_ull n);

#endif