#include "main.h"
/**
 * decimal_to_binary - convert an int to binary.
 * @fmt: argument passed.
 * Return: number of character.
 */
int decimal_to_binary(va_list fmt)
{
	char *binary, temp;
	int i, j, k, mid, n, len = 0;
	int value = va_arg(fmt, int);

	binary = malloc(value * sizeof(char *));
	if (value < 0)
		return (-1);
	while (value != 0)
	{
		if (value % 2 == 0)
		{
			binary[len] = '0';
		}
		else
			binary[len] = '1';
		len++;
		value /= 2;
	}
	binary[len + 1] = '\0';
	n = _strlen(binary);
	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		temp = binary[i];
		binary[i] = binary[len - i - 1];
		binary[len - i - 1] = temp;
	}
	for (j = 0; j < n; j++)
	{
		_putchar(binary[j]);
		k++;
	}
	return (k);
}
