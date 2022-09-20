/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:21:00 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 21:39:33 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
	{
		count += ft_putchar(str[count]);
	}
	return (count);
}
