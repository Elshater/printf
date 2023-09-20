#include "main.h"

/**
* _printf - printf clone
*
* @format: format
* Return: int
*/
int _printf(const char *format, ...)
{
	va_list ap;

	int count = 0;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{

			if (*(++format) == '%')
			{
				count += print_percent();
			}

			count += print_format(*format, ap);


		}
		else
		{
			count += write(1, format, 1);
		}

		++format;
	}

	va_end(ap);

	return (count);
}

