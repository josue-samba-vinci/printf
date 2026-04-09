#include <unistd.h>

size_t	ft_putchar_fd(char c, int fd, va_list list)
{
	write(fd, &c, 1);
    return 1;
}