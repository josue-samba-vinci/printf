/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:58:52 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/20 17:58:54 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
size_t	ft_type(char c, va_list list);
size_t	ft_putchar(char c);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_base_address(unsigned long nbr);
size_t	ft_percent(void);
size_t	ft_putstr(char *s);
size_t	ft_putnbr_unsigned(unsigned int n);
size_t	ft_putnbr_base_lowercase(unsigned int nbr);
size_t	ft_putnbr_base_uppercase(unsigned int nbr);
#endif
