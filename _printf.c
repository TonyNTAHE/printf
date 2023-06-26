#include "main.h"

/**
* _printf - produces output according to a format.
* @format: format.
* Return: the number of characters printed.
*/
int _printf(const char *format, ...)
{
va_list fmt;
int len = 0;
char *s;

va_start(fmt, format);
if (format)
{
for (; *format; format++)
{
if (*format == '%' && *(++format))
{
if (*format == 'c')
len += _putchar(va_arg(fmt, int));
else if (*format == 's')
{
s = va_arg(fmt, char *);
if (s)
{
while (*s)
len += _putchar(*s++);
}
else
return (-1);
}
else if (*format == '%')
len += _putchar('%');
else
len += _putchar('%') + _putchar(*format);
}
else if (*format == '%' && !*(format + 1))
{
va_end(fmt);
return (-1);
}
else
len += _putchar(*format);
}
}
else
return (-1);
va_end(fmt);
return (len);
}
