#include <limits.h>
#include <unistd.h>

size_t	ft_putnbr_fd(int n, int fd, va_list list)
{
	char	tab[11];
	size_t	i;
    size_t  len;

	i = 0;
    len = 0;
	if (n == INT_MIN || n == 0)
	{
		if (n == INT_MIN)
        {
			write (fd, "-2147483648", 11);
            return 11;
        }
		if (n == 0)
        {
			write (fd, "0", 1);
            return 1;
        }
	}
	if (n < 0)
	{
		n = -n;
        len++;
		write (fd, "-", 1);
	}
	while (n > 0)
	{
		tab[i++] = n % 10 + 48;
		n = n / 10;
	}
    len += i;
	while (i > 0)
		write(fd, &tab[--i], 1);
    return (len);
}