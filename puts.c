#include "main.h"
/**
* _puts - print string
* @s: input string
* Return: int
*/
int _puts(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar((int) *s);
		++count;
		++s;
	}
	return (count);
}
