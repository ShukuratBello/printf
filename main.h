#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
/**
 * struct type - structure for printing various format types
 * @t: type to print
 * @f: function to print
 */
typedef struct type
{
	char *t;
	int (*f)();
} 
type_t;

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int type_c(va_list args)
unsigned int type_s(va_list args)
unsigned int type_percent(va_list args)
#endif
