#include "main.h"

/**
 * type_c - A function that prints a char
 * @args: character to print
 * Return: The number of bytes stored to the buffer.
 */
unsigned int type_c(va_list args)
{
	char c;
	
	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * type_s - A function that prints a string
 * @args: The string it prints
 * Return: i
 */
unsigned int type_s(va_list args)
{
	char *str;
	int i = 0;

	*str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}

/**
 * type_percent - print char %.
 * @args: A va_list pointing to the argument to be converted.
 * Return: (always 1).
 */
unsigned int type_percent(va_list args)
{
	char percent = "%";
	(void)args;

	_putchar(37)
	return (1);
}
