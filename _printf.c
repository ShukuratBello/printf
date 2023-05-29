#include "main.h"
#include <stdarg.h>

/**
 * view_format - checks code for a valid format specifier
 * @format: format specifier that could be valid
 * Return: valid function or NULL pointer
 */
int (*view_format(const char *format))(va_list)
{
	int i = 0;
	type_t p[] = {
		{'c', type_c},
		{'s', type_s},
		{'%', type_percent},
		{0, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}

/**
 * _printf - format printing
 * @format: argument types to print
 * Return: numbers of characters to print
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0; /*not sure about this line*/

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = check_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
