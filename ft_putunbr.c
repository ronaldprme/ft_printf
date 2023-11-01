/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:34:36 by rprocopi          #+#    #+#             */
/*   Updated: 2023/11/01 14:37:13 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nbr, int *counter)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10, counter);
	write(1, &"0123456789"[nbr % 10], 1);
	(*counter)++;
}
