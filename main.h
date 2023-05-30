#ifndef _MAIN_H_
#define _MAIN_H_
#define INT_BITS (4 * 8)

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct form - A new type defining a converter struct.
 * @specifier: A character representing a conversion specifier.
 * @func: A pointer to a conversion function corresponding to specifier.
 */
typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} converter_t;

int printf_int(va_list args);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int print_percent(char *buff_dest, va_list arg, int buff_count);
int printf_b(char *buff_dest, va_list arg, int buff_count);
int printf_c(char *buff_dest, va_list val, int buff_count);
int printf_s(char *buff_dest, va_list val, int buff_count);
int printf_di(char *buff_dest, va_list arg, int buff_count);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int buff_append(char *buff_dest, va_list arg, int buff_count, char type);
int print_buff(char *buff, unsigned int nbuff);

#endif
