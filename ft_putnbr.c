/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:08:37 by rpr               #+#    #+#             */
/*   Updated: 2023/11/01 17:19:23 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nbr, int *counter)
{
	if (nbr < -9 || nbr > 9)
		ft_putnbr(nbr / 10, counter);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		(*counter)++;
	}
	write(1, &"0123456789"[(nbr % 10) * ((nbr > 0) - (nbr < 0))], 1);
	(*counter)++;
}
