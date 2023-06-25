#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format.
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	int (*print_func)(va_list, const char *);
	va_start(arg, format);
	if (format)
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				print_func = get_print((char *)format);
				if (print_func != NULL)
				{
					print_func(arg, format);
					count++;
					format++;
				}
				else
				{
					_putchar('%');
					_putchar(*format);
					count += 2;
				}
			}
			else
			{
				_putchar(*format);
				count++;
			}
			format++;
		}
	}
	va_end(arg);
	return (count);
}
