#include "libft.h"
#include <stdarg.h>

size_t  ft_type(char c, va_list list)
{
    if (c == 'c')
        return (ft_c((char)va_arg(list, int)));
    else if (c == 's')
        return (ft_s(va_arg(list, char *)));
    else if (c == 'p')
        return (ft_p(va_arg(list, unsigned long)));
    else if (c == 'd' || c == 'i')
        return (ft_d_i(va_arg(list, int)));
    else if (c == 'u')
        return (ft_u(va_arg(list, unsigned int)));
    else if (c == 'x')
        return (ft_x(va_arg(list, unsigned int)));
    else if (c == 'X')
        return (ft_X(va_arg(list, unsigned int)));
    else if (c == '%')
        return (ft_percent());
    else
        return 0;
}