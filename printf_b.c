#include "main.h"

/**
 * printf_b - substitute %b by unsigned int argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the b of %b is
 * Return: New index
 */
int printf_b(char *buff_dest, va_list arg, int buff_count)
{
	unsigned int fig = va_arg(arg, unsigned int);
	unsigned int temp = fig;
	int b = 1;

	while (temp > 1)
	{
		b *= 2;
		temp /= 2;
	}

	temp = fig;
	while (b > 0)
	{
		buff_dest[buff_count] = ('0' + temp / b);
		temp %= b;
		b /= 2;
		buff_count++;
	}

	return (buff_count);
}
