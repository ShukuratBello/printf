#include "main.h"

/**
 * printf_X - substitute %X by unsigned int argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of buffer where the o of %X is
 * Return: New index
 */
int printf_X(char *buff_dest, va_list arg, int buff_count)
{
	unsigned int fig = va_arg(arg, unsigned int);
	unsigned int temp = fig;
	int X = 1;

	while (temp > 15)
	{
		X *= 16;
		temp /= 16;
	}

	temp = fig;
	while (X > 0)
	{
		buff_dest[buff_count] = (temp / X < 9) ?
			(temp / X + '0') : ('A' + temp / X - 10);
		temp %= X;
		X /= 16;
		buff_count++;
	}

	return (buff_count);
}
