#include "main.h"

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
if (*format == '%' && *(format + 1))
{
if (*format == 'c')
len += _putchar(va_arg(fmt, int));
else if (*format == 's')
{
s = va_arg(fmt, char *s);
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
