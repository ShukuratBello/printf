#include "main.h"

/**
 * printf_s - Function that prints string
 * @buff_dest: character string
 * @val: format specifier
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed
 */
int printf_s(char *buff_dest, va_list val, int buff_count)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";

	if (s[0] == '\0')
	{
		buff_dest[buff_count] = '\0';
		buff_count++;
	}

	while (s[i] != '\0')
	{
		buff_dest[buff_count] = s[i];
		i++;
		buff_count++;
	}

	return (buff_count);
}
