#include "main.h"

/**
 * printf_c - A function that prints a char
 * @buff_dest: buffer
 * @val: character to print
 * @buff_count: index of buffer pointer
 * Return: buff index
 */
int printf_c(char *buff_dest, va_list val, int buff_count)
{
	char ch;

	ch = va_arg(val, int);

	buff_dest[buff_count] = ch;

	return (++buff_count);
}
