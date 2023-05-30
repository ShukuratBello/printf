#include "main.h"

/**
 * printf_u - substitute %u by argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of dst where the u of %u is
 * Return: New index
 */
int printf_u(char *buff_dest, va_list arg, int buff_count)
{
	int tens = 1;
	unsigned int temp;
	unsigned int fig;

	fig = va_arg(arg, unsigned int);

	temp = fig;

	while (temp > 9)
	{
		tens *= 10;
		temp /= 10;
	}

	temp = fig;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + temp / tens);
		temp %= tens;
		tens /= 10;
		buff_count++;
	}

	return (buff_count);
}
