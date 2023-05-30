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
	converter_t container[] = {
		{'c', printf_c}, {'s', printf_s}, {'%', print_percent},
		{'d', printf_di}, {'i', printf_di}, {'b', printf_b},
		{'u', printf_u}, {'o', printf_o}, {'x', printf_x},
		{'X', printf_X}, {'r', printf_r}, {'R', printf_R}, {'\0', NULL}
	};

	va_list arg;
	int i = 0, j = 0, buff_count = 0, prev_buff_count = 0;
	char buffer[2000];

	if (!format)
		return (-1);
	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++, prev_buff_count = buff_count;
			for (j = 0; container[j].t != '\0'; j++)
			{
				if (format[i] == '\0')
					break;
				if (format[i] == container[j].t)
				{
					buff_count = container[j].f(buffer, arg, buff_count);
					break;
				}
			}
			if (buff_count == prev_buff_count && format[i])
				i--, buffer[buff_count] = format[i], buff_count++;
		}
		else
			buffer[buff_count] = format[i], buff_count++;
		i++;
	}
	va_end(arg);
	buffer[buff_count] = '\0';
	print_buff(buffer, buff_count);
	return (buff_count);
}
