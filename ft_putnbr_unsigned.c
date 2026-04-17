#include "printf.h"

size_t	ft_u(unsigned int n)
{
	char	tab[11];
	size_t	i;
    size_t  len;

	i = 0;
    len = 0;
	if (n == 0)
    {
        write (1, "0", 1);
        return (1);
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
