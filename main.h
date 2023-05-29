#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct function - A new type defining a converter struct.
 * @specifier: A character representing a conversion specifier.
 * @func: A pointer to a conversion function corresponding to specifier.
 */
typedef struct format
{
	char *id;
	int (*func)(va_list);
} converter_t;

int printf_unsigned(va_list args);
int printf_s(va_list val);
int printf_int(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int print_percent(va_list l);
int printf_c(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
