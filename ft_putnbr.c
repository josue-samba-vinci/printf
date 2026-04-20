#include "ft_printf.h"

size_t	ft_min_null(int n)
{
	if (n == INT_MIN)
        {
			write (1, "-2147483648", 11);
            return (11);
        }
		else
		{
			write (1, "0", 1);
            return (1);
		}
}

size_t	ft_putnbr(int n)
{
	char	tab[11];
	size_t	i;
    size_t  len;

	i = 0;
    len = 0;
	if (n == INT_MIN || n == 0)
		return ft_min_null(n);
	if (n < 0)
	{
		n = -n;
        len++;
		write (1, "-", 1);
	}
	while (n > 0)
	{
		tab[i++] = n % 10 + 48;
		n = n / 10;
	}
    len += i;
	while (i > 0)
		write(1, &tab[--i], 1);
    return (len);
}
