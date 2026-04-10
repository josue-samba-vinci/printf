#include <unistd.h>

size_t	ft_%(void)
{
    char    c;

    c = '%';
	write(1, &c, 1);
    return (1);
}