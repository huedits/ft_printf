/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:03:26 by vimatheu          #+#    #+#             */
/*   Updated: 2022/09/20 20:58:47 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	check_flag(char flag, va_list arg);
int	ft_itoa(int nbr);
int	ft_nsize(unsigned int n);
int	ft_printhex(unsigned int nbr, int flag);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_utoa(unsigned int nbr);

#endif