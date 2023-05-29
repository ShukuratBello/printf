#include "main.h"

/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
unsigned int print_percent(va_list l)
{
	(void)l;
	return (_putchar('%'));
}
