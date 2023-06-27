#include "main.h"

/**
 * _printf  - produces output according to a format.
 * @format: format.
 * Return: the number pf characters to a format.
 */
int _printf(const char *format, ...)
{
va_list fmt;
int i = 0;
char *s;

va_start(fmt, format);
if (format)
{
	for (; *format; format++)
	{
		if (*format == '%' && *(++format))
		{
			if (*format == 'c')

				i += _putchar(va_arg(fmt, int));
			else if (*format == 's')
			{
				s = va_arg(fmt, char *);
				if (s)
				{
					while (*s)
						i += _putchar(*s++);
				}
				else
					return (-1);
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
