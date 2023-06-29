#include "main.h"

/**
 * decimal_to_HEXA - convert from int to HEXA.
 * @fmt: argument.
 * Return: number of character printed.
 */
int decimal_to_HEXA(va_list fmt)
{
	unsigned int value = va_arg(fmt, int);
	int i = 0, j = 0, newv, rem = 0, len = 0;
	int  k;
	int *HEXA;

	newv  = value;
	while (newv / 16 > 0)
	{
		newv /= 16;
		i++;
	}
	HEXA = malloc(i * sizeof(int));
	if (HEXA == NULL)
		return (-1);
	while (value > 0)
	{
		rem = value % 16;
		HEXA[j] = rem;
		value = value / 16;
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		if (HEXA[k] < 10)
			_putchar(48 + HEXA[k]);
		else
			_putchar(65 + (HEXA[k] - 10));
		len++;
	}
	free(HEXA);
	return (len);
}
