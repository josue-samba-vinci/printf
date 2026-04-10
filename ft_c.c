#include <unistd.h>

size_t	ft_c(char c)
{
	write(1, &c, 1);
    return 1;
}