#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
size_t  ft_printf(const char *format, ...);
size_t  ft_type(char c, va_list list);
size_t	ft_c(char c);
size_t	ft_d_i(int n);
size_t	ft_p(unsigned long nbr);
size_t	ft_percent(void);
size_t	ft_s(char *s);
size_t	ft_u(unsigned int n);
size_t	ft_x(unsigned int nbr);
size_t	ft_X(unsigned int nbr);
#endif
