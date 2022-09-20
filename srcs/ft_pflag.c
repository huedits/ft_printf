/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pflag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:29:32 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 23:25:05 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf.h"

int	ft_pflag(unsigned int nbr)
{
	int	count;

	if (!nbr)
		return (ft_putstr("(null)"));
	count = ft_putstr("0x");
	count += ft_printhex(nbr, 'x');
	return (count);
}
