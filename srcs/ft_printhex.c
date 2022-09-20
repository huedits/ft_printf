/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:16:17 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 19:31:38 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define BASE "0123456789abcdef"

int	ft_printhex(unsigned int nbr, int case)
{
	int	count;

	count = 0;
	if (nbr > 16)
	{
		count += ft_printhex((nbr / 16), case);
		count += ft_printhex((nbr % 16), case);
	}
	else
	{
		if (nbr <= 10)
			return (ft_putchar(BASE[nb] + '0'));
		else
			return (ft_putchar(BASE[nb] - ('x' - case)));
	}
	return (count);
}
