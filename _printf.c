#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format - format.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
        va_list arg;
        char c;
        char *s;
        int count = 0;

        va_start(arg, format);
        if (format)
        {
                while(*format)
                {
                        if (*format == '%')
                        {
                                format++;
                                switch(*format)
                                {
                                        case 'c':
                                                c = va_arg(arg, int);
                                                _putchar(c);
                                                count++;
                                                break;
                                        case 's':
                                                s = va_arg(arg, char *);
                                                if (*s)
                                                {
                                                        while (*s)
                                                        {
                                                                _putchar(*s);
                                                                count++;
                                                                s++;
                                                        }
                                                        break;
                                                }
                                                else
                                                        return (-1);
                                                break;
                                        case '%':
                                                _putchar('%');
                                                count++;
                                                break;
                                        default:
                                                _putchar('%');
                                                _putchar(*format);
                                                count += 2;
                                                break;
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
        else
        {
                return (-1);
        }
        va_end(arg);
        return (count);
}
