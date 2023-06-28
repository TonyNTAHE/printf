#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_num(const char *format, ...);

/*from spec functions.c*/ 
int print_c(va_list fmt);
int print_s(va_list fmt);
int print_i(va_list fmt);
int decimal_to_binary(va_list fmt);
int _strlen(char *s);
/**
 * struct chr - struct chr
 * @str: pointer to string.
 * @f: function pointer.
 */
typedef struct chr
{
	char *s;
	int (*f)(va_list);
} ch_s;
int get_spec(char s, va_list fmt);
#endif
