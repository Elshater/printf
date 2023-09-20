#include "main.h"

/**
* print_digit - print int based on base
*
* @n: input
* @base: input base number
* Return: int
*/
int print_digit(long n, int base)
{
	int count;

	char *lower_symbols;


	lower_symbols = "0123456789abcdef";


	if (n < 0)
	{

		write(1, "-", 1);

		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
	return (_putchar(lower_symbols[n]));
	}
	else {
        count = print_digit(n / base, base);

        return (count + print_digit(n % base, base));
    }
}

