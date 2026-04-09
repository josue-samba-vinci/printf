#include "libft.h"

size_t	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	char	tab[50];
    size_t  len;

	i = 0;
	len = 0;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return(1);
	}
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write (1 , "-", 1);
		len++;
	}
	while (nbr > 0)
	{
		tab[i++] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
	}
	tab[i] = '\0';
    len += i;
	i--;
	while (i >= 0)
		write(1, &tab[i--], 1);
	return (len);
}
