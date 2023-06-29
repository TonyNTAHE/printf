#include "main.h"

/**
 * decimal_to_oct - convert from int to octo.
 * @fmt: argument.
 * Return: number of character printed.
 */
int decimal_to_oct(va_list fmt)
{
	unsigned int value = va_arg(fmt, int);
	int i = 0, j = 0, newv, rem = 0, len = 0;
	int  k;
	int *octal;

	newv  = value;
	while (newv / 8 > 0)
	{
		newv /= 8;
		i++;
	}
	octal = malloc(i * sizeof(int));
	if (octal == NULL)
		return (-1);
	while (value > 0)
	{
		rem = value % 8;
		octal[j] = rem;
		value = value / 8;
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(48 + octal[k]);
		len++;
	}
	free(octal);
	return (len);
}
