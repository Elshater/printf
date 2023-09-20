#include "main.h"
#include <unistd.h>
/**
*_putchar - print c
*
* @c: input charcter
*Return: int
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}

