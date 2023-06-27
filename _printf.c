#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: argument.
 * Return: the number of charater printed.
 */
int _printf(const char *format, ...)
{
	int len = 0;
	int count = 0;
	va_list fmt;

	if (format == NULL)
		return (-1);
	va_start(fmt, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			len++;
		}
		else if (*(format + 1) == '%')
		{
			_putchar('%');
			len++;
			format++;
		}
		else
		{
			if (*(format + 1) == '\0')
				return (-1);
			count = get_spec(*(format + 1), fmt);
			if (count == -1 || count != 0)
				format++;
			if (count > 0)
				len += count;
			else
			{
				_putchar('%');
				len++;
			}
		}
		format++;
	}
	va_end(fmt);
	return (len);
}
