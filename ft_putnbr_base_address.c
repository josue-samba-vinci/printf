/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_address.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:57:13 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/20 17:57:14 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base_address(unsigned long nbr)
{
	int		i;
	char	tab[50];
	char	*base;
	size_t	len;

	i = 0;
	len = 0;
	base = "0123456789abcdef";
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (nbr > 0)
	{
		tab[i++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	tab[i] = '\0';
	len += i + 2;
	i--;
	write(1, "0x", 2);
	while (i >= 0)
		write(1, &tab[i--], 1);
	return (len);
}
