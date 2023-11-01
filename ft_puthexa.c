/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:42:22 by rprocopi          #+#    #+#             */
/*   Updated: 2023/11/01 13:42:34 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long nbr, char mode, int *counter)
{
	if (mode == 'p')
	{
		if (!nbr)
			ft_putstr("(nil)", counter);
		else
		{
			write(1, "0x", 2);
			*counter = *counter + 2;
			mode = 'x';
		}
	}
	if (nbr != 0 && nbr / 16)
		ft_puthexa(nbr / 16, mode, counter);
	if (mode == 'X')
	{
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
		(*counter)++;
	}
	if (mode == 'x')
	{
		write(1, &"0123456789abcdef"[nbr % 16], 1);
		(*counter)++;
	}
}
