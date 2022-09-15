/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:04:21 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/15 02:43:56 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_flag(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, char)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'd' || c == 'i')
		return (ft_itoa(va_arg(arg, int)));
	if (c == 'u')
		return (ft_utoa(va_arg(arg, unsigned int)));
	if (c == 'x' || 'X')
		return (ft_printhex(va_arg(arg, unsigned int), c));
	if (c == 'p')
		return (p_flag(va_arg(arg, unsigned long int)));
	else
		return (ft_putchar(c));
}
