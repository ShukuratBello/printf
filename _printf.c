#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * handle_specifiers - entry point
 * @specifier: conversion between function types
 * Return: 0
 */
unsigned int (*handle_specifiers(const char *specifier))(va_list)
{
	int i;
	converter_t converters[] = {
		{'c', printf_c},
		{'s', printf_s},
		{'%', printf_percent},
		{0, NULL}
		/**
		 *{'i', convert_di},
		 *{'%', convert_percent},
		 *{'b', convert_b},
		 *{'u', convert_u},
		 *{'o', convert_o},
		 *{'x', convert_x},
		 *{'X', convert_X},
		 *{'S', convert_S},
		 *{'p', convert_p},
		 *{'r', convert_r},
		 *{'R', convert_R},
		 */
	};

	for (i = 0; converters[i].func; i++)
	{
		if (converters[i].specifier == *specifier)
			return (converters[i].func);
	}

	return (NULL);
}

/**
 * _printf - function to print string
 * @format: argument types to print
 * Return: length of characters to print
 */
int _printf(const char * const format, ...)
{

	va_list args;
	int i = 0, j;
	unsigned int len = 0;
	unsigned int (*f)(va_list);

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		if (*(format + i) == '%')
		{
			f = handle_specifiers(format + i + 1);
			len += f(args);
			i = i + 1;
			goto Here;
		}
			_putchar(format[i]);
			len++;
			i++;
	}
	va_end(args);
	return (len);
}
