/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:24:33 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 17:40:45 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_utoa(unsigned int nbr)
{
	int		size;
	char	*str;

	size = ft_nsize(nbr);
	str = (char *) malloc (size + 1);
	if (!str)
		return (0);
	str[size] = 0;
	while (size > 0)
	{
		str[size - 1] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	return (ft_putstr(str));
}
