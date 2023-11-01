/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:00:54 by rpr               #+#    #+#             */
/*   Updated: 2023/11/01 14:13:04 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*ft 0 para entrada padrão (stdin), 1 para saída padrão (stdout) e 
2 para saída de erro padrão (stderr)*/

void	ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
