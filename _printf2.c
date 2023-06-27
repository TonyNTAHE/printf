#include "main.h"

/**
 * _print_num - produces output according to a format.
 * @format: format.
 * Return: the number pf characters to a format.
 */
int _print_num(const char *format, ...)
{
va_list fmt;
int i = 0;

va_start(fmt, format);
if (format)
{
	for (; *format; format++)
	{
		if (*format == '%' && *(++format))
		{
			if (*format == 'd' || *format == 'i')
			{
				i += _putchar(va_arg(fmt, int));
			}
			else if (*format == '%')
				i += _putchar('%');
			else
				i += _putchar('%') + _putchar(*format);
		}
		else
			i += _putchar(*format);
	}
}
else
return (-1);
va_end(fmt);
return (i);
}
