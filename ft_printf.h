/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:30:19 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/12/05 17:33:44 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
//# include "Libft/libft.h"

int		ft_printnbr(int n);
int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
size_t	ft_strlen(const char *str);
void	ft_unsigned_putnbr(unsigned int nb);
void	ft_putstr_fd(char *s, int fd);

#endif