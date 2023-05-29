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
	int (*f)(va_list);
} 
type_t

int _printf(const char *format, ...);
int _putchar(char c);
int type_c(va_list c);
int type_s(va_list s);
int type_p(va_list p);
#endif
