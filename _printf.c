#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function to print string
 * @format: argument types to print
 * Return: length of characters to print
 */
int _printf(const char *format, ...)
{
	converter_t convert[] = {
		{"%c", printf_c},
		{"%s", printf_s},
		{"%%", print_percent},
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

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (convert[j].id[0] == format[i] && convert[j].id[1] == format[i + 1])
			{
				len += convert[j].func(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
