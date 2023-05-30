#include "main.h"

/**
 * printf_x - substitute %x by unsigned int argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the o of %x is
 * Return: New index
 */
int printf_x(char *buff_dest, va_list arg, int buff_count)
{
	unsigned int fig = va_arg(arg, unsigned int);
	unsigned int temp = fig;
	int x = 1;

	while (temp > 15)
	{
		x *= 16;
		temp /= 16;
	}

	temp = fig;
	while (x > 0)
	{
		buff_dest[buff_count] = (temp / x < 9) ?
			(temp / x + '0') : ('a' + temp / x - 10);
		temp %= x;
		x /= 16;
		buff_count++;
	}

	return (buff_count);
}
