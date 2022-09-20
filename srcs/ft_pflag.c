/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pflag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:29:32 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 23:52:49 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf.h"

int	ft_pflag(unsigned long nbr)
{
	int	count;

	count = ft_putstr("0x");
	count += ft_printhex(nbr, 'x');
	return (count);
}
