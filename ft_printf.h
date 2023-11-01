/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:52:53 by rprocopi          #+#    #+#             */
/*   Updated: 2023/11/01 14:05:29 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

void		ft_argument(const char *str, int i, va_list arg, int *counter);
void		ft_puthexa(unsigned long nbr, char mode, int *counter);
void		ft_putunbr(unsigned int nbr, int *counter);
void		ft_putnbr(long nbr, int *counter);
void		ft_putchar(char c, int *counter);
void		ft_putstr(char *str, int *counter);
int			ft_printf(const char *str, ...);
#endif
