#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H


#define NULL_STRING "(null)"

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _puts(char *s);

int _putchar(int c);

int print_digit(long n, int base);

int print_format(char specifier, va_list ap);

int print_percent(void);

int _printf(char *format, ...);



#endif

