#include "main.h"

/**
 * printf_o - substitute %o by unsigned int argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the o of %o is
 * Return: New index
 */
int printf_o(char *buff_dest, va_list arg, int buff_count)
{
	unsigned int fig = va_arg(arg, unsigned int);
	unsigned int temp = fig;
	int octs = 1;

	while (temp > 7)
	{
		octs *= 8;
		temp /= 8;
	}

	temp = fig;
	while (octs > 0)
	{
		buff_dest[buff_count] = ('0' + temp / octs);
		temp %= octs;
		octs /= 8;
		buff_count++;
	}

	return (buff_count);
}
