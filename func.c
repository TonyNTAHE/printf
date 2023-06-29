#include "main.h"
/**
 * print_c - print charater.
 * @fmt: argument.
 * Return: 1 if there's character, otherwise -1.
 */
int print_c(va_list fmt)
{
	return (_putchar(va_arg(fmt, int)));
}
/**
 * print_s - when format is s
 * @fmt: argument.
 * Return: the number of character printed.
 */
int print_s(va_list fmt)
{
	char *s;
	int count = 0;

	s = va_arg(fmt, char *);
	if (s == NULL)
		s = "(null)";
	else if (*s == '\0')
		return (-1);
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
/**
 * print_i - prints i or d.
 * @fmt: value to be printed.
 * Return: the length of number diplayed.
 */
int print_i(va_list fmt)
{
	unsigned int divisor = 1, num, i = 0, j = 0;
	int value = va_arg(fmt, int);

if (value < 0)
{
	_putchar('-');
	value *= -1;
	j++;
}
while (value / divisor > 9)
{
	i++;
	divisor *= 10;
}
while (divisor >= 1)
{
	num = value / divisor;
	_putchar('0' + num);
	value %= divisor;
	divisor /= 10;
	j++;
}
return (j);
}
/**
 * _strlen - return the length.
 * @s: character.
 * Return: len;
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
int print_u(va_list fmt)
{
	unsigned int divisor = 1, num, i = 0, j = 0;
	int value = va_arg(fmt, unsigned int);

	while (value / divisor > 9)
	{
		i++;
		divisor *= 10;
	}
	while (divisor >= 1)
	{
		num = value / divisor;
		_putchar(48 + num);
		value %= divisor;
		divisor /= 10;
		j++;
	}
	return (j);
}
