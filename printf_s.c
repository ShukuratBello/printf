#include "main.h"

/**
 * printf_s - Function that prints string
 * @val: format specifier
 * Return: len
 */
unsigned int printf_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (len);
	}
}
