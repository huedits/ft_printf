/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:19:48 by vimatheu          #+#    #+#             */
/*   Updated: 2022/10/10 21:26:47 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
