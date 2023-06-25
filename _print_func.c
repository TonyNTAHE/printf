#include "main.h"

/**
 * print_char - printf a charater.
 * @ap: argument list.
 * @format:format.
 * Return: number of charater printed.
 */
int print_char(va_list ap, const char *format)
{
	char c;
	int count = 0;

	if (format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(ap, int);
				_putchar(c);
				count++;
			}
		}
	}
	return (count);
}
/**
 * print_string - prints string.
 * @ap: arg list.
 * @format: format.
 * Return: number of character printed.
 */
int print_string(va_list ap, const char *format)
{
	char *s;
	int count = 0;

	if (format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				s = va_arg(ap, char *);
				if (s != NULL)
				{
					while (*s)
					{
						_putchar(*s);
						s++;
						count++;
					}
				}
			}
		}
	}
	return (count);
}
/**
 * print_presign - print precentage sign.
 * @ap: arg list.
 * @format: format.
 * Return: the number of character printed.
 */
int print_presign(va_list ap, const char *format)
{
	int count = 0;

	if (format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
	}
	return (count);
}

/**
 * print_ev - prints everything.
 * @ap: argument list,
 * @format: format.
 * Return: number of character printed.
 */
int print_ev(va_list ap, const char *format)
{
	int count = 0;

	if (format)
	{
		if (*format != '%')
		{
			_putchar('%');
			_putchar(*format);
			count += 2;
		}
	}
	return (count);
}
