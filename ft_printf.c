#include "ft_printf.h"

int  ft_printf(const char *format, ...)
{
	size_t  i;
	size_t  sum;
	va_list list;
	va_start(list, format);

	i = 0;
	sum = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			sum += ft_type(format[i], list);
		}
		else 
		{
			write(1, &format[i], 1);
			sum++;
		}
		i++;
	}
	va_end(list);
	return (int)(sum);
}
