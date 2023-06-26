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
while (*format)
{
if (*format == '%' && *(++format))
{
switch (*format)
{
case 'c':
len += _putchar(va_arg(fmt, int));
break;
case 's':
s = va_arg(fmt, char *);
if (s)
{
while (*s)
len += _putchar(*s++);
}
break;
case '%':
len += _putchar('%');
break;
default:
len += _putchar('%') + _putchar(*format);
break;
}
}
else
len += _putchar(*format);
format++;
}
va_end(fmt);
return (len);
}
