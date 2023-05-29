#include "main.h"

/**
 * printf_c - A function that prints a char
 * @val: character to print
 * Return: The number of bytes stored to the buffer.
 */
unsigned int printf_c(va_list val)
{
	char ch;

	ch = va_arg(val, int);
	_putchar(ch);
	return (1);
}
