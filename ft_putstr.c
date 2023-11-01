/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:16:30 by rpr               #+#    #+#             */
/*   Updated: 2023/11/01 14:08:10 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *counter)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		(*counter)++;
		i++;
	}
}
