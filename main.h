#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int print_char(va_list ap, const char *format);
int print_string(va_list ap, const char *format);
int print_ev(va_list ap, const char *format);
int print_presign(va_list ap,const char  *format);
int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct func - struct func.
 * @fsp: format specify
 * @print - function associated with.
 */
typedef struct func
{
	char *fsp;
	int (*print)(va_list arg, const char *format);
} fun;
int (*get_print(char *c))(va_list arg, const char *format);
#endif
