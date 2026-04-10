#include "libft.h"

size_t	ft_x(unsigned int nbr)
{
	int	i;
	char	tab[50];
    size_t  len;
	char	*base;

	i = 0;
	len = 0;
	base = "0123456789abcdef";

	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return(1);
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
