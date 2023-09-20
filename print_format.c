#include "main.h"
/**
* print_format - print format
*@specifier: format specifier
*@ap: argument pointer
*
* Return: int number of bytes
*/
int print_format(char specifier, va_list ap)
{
	int count;


	count = 0;
	if (specifier == 'c')
	{
		count += _putchar(va_arg(ap, int));
	}
	else if (specifier == 's')
	{
		count += _puts(va_arg(ap, char *));
	}
	else if (specifier == 'd' || specifier == 'i')
	{
		count += print_digit(va_arg(ap, int), 10);
	}

	return (count);
}
