#include "main.h"
/**
* _puts - print string
* @s: input string
* Return: int number of bytes printed
*/
int _puts(char *s)
{
	int count = 0;


	if ((int)(!s) == 1)
        	s = NULL_STRING;

	while (*s)
	{
		_putchar((int) *s);
		++count;
		++s;
	}
	return (count);
}
