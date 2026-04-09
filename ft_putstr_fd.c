#include <unistd.h>

size_t	ft_putstr_fd(char *s, int fd, va_list list)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
