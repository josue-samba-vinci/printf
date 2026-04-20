/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:57:32 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/20 17:57:34 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base_lowercase(unsigned int nbr)
{
	int		i;
	char	tab[50];
	size_t	len;
	char	*base;

	i = 0;
	len = 0;
	base = "0123456789abcdef";
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	while (nbr > 0)
	{
		tab[i++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	tab[i] = '\0';
	len += i;
	i--;
	while (i >= 0)
		write(1, &tab[i--], 1);
	return (len);
}
