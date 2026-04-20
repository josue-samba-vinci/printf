#include "ft_printf.h"

size_t  ft_type(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putnbr_base_address(va_arg(list, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_base_lowercase(va_arg(list, unsigned int)));
	else if (c == 'X')
		return (ft_putnbr_base_uppercase(va_arg(list, unsigned int)));
	else if (c == '%')
		return (ft_percent());
	else
		return 0;
}