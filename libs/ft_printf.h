/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:03:26 by vimatheu          #+#    #+#             */
/*   Updated: 2022/10/10 21:29:04 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>


# ifdef __APPLE__
#  define NULLTEXT "0x0"
# elif __linux__
#  define NULLTEXT "(nil)"
# else
#  define NULLTEXT "(null)"
# endif

int		check_flag(char flag, va_list arg);
int		ft_itoa(int nbr);
int		ft_nsize(unsigned int n);
int		ft_pflag(unsigned long nbr);
int		ft_printf(const char *str, ...);
int		ft_printhex(unsigned long nbr, int flag);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_utoa(unsigned int nbr);
void	*ft_calloc(size_t count, size_t size);

#endif