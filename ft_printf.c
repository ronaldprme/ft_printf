/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:36 by rprocopi          #+#    #+#             */
/*   Updated: 2023/11/01 15:12:12 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		counter;
	va_list	arg;

	i = 0;
	counter = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (str[i + 1] == ' ')
				i++;
			ft_argument(str, i, arg, &counter);
			i++;
		}
		else
			ft_putchar(str[i], &counter);
		i++;
	}
	va_end(arg);
	return (counter);
}
