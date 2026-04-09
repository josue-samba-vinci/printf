#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	contains_dup(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i + 1])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	contains_p_m(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	verif_base(int nbr, char *base)
{
	if (ft_strlen(base) <= 1 || contains_dup(base) || contains_p_m(base))
		return (0);
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (0);
	}
	return (1);
}

size_t	ft_putnbr_base(int nbr, char *base)
{
	size_t	i;
	char	tab[50];
    size_t  len;

	i = 0;
	if (!verif_base(nbr, base))
		return 0;;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write (1 , "-", 1);
	}
	while (nbr > 0)
	{
		tab[i++] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
	}
	tab[i] = '\0';
    len = i;
	while (--i >= 0)
		write(1, &tab[i], 1);
	return (len);
}