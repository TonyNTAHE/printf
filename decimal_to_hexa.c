#include "main.h"

/**
 * decimal_to_hexa - convert from int to hexa.
 * @fmt: argument.
 * Return: number of character printed.
 */
int decimal_to_hexa(va_list fmt)
{
	unsigned int value = va_arg(fmt, int);
	int i = 0, j = 0, newv, rem = 0, len = 0;
	int  k;
	int *hexa;

	newv  = value;
	while (newv / 16 > 0)
	{
		newv /= 16;
		i++;
	}
	hexa = malloc(i * sizeof(int));
	if (hexa == NULL)
		return (-1);
	while (value > 0)
	{
		rem = value % 16;
		hexa[j] = rem;
		value = value / 16;
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		if (hexa[k] < 10)
			_putchar(48 + hexa[k]);
		else
			_putchar(97 + (hexa[k] - 10));
		len++;
	}
	free(hexa);
	return (len);
}
