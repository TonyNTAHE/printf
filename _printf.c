#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len  = 0, i = 0;
	char c, *s;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
			{
				c = (char)va_arg(ap, int);
				_putchar(c);
				len++;
			}
			else if (format[i] == 's')
			{
				s = va_arg(ap, char *);
				if (s)
				{
					while (*s)
					{
						_putchar(*s);
						len++;
						s++;
					}
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
