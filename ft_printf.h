/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:30:19 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/25 15:55:44 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "./Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif