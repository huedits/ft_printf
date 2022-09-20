/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:04:21 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 22:44:19 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += check_flag(*str, args);
		}
		else
		{
			count++;
			ft_putchar(*str);
		}
		str++;
	}
	va_end(args);
	return (count);
}

int	check_flag(char flag, va_list arg)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (flag == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (flag == 'd' || flag == 'i')
		return (ft_itoa(va_arg(arg, int)));
	if (flag == 'u')
		return (ft_utoa(va_arg(arg, unsigned int)));
	if (flag == 'x' || flag == 'X')
		return (ft_printhex(va_arg(arg, unsigned int), flag));
	if (flag == 'p')
		return (ft_pflag(va_arg(arg, unsigned long int)));
	else
		return (ft_putchar(flag));
}

int	ft_nsize(unsigned int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	if (size > (~(1 << 31) / count))
		return (NULL);
	mem = malloc (size * count);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *) mem)[i] = 0;
		i++;
	}
	return (mem);
}
