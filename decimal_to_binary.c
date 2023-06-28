#include "main.h"
/**
 * decimal_to_binary - convert an int to binary.
 * @fmt: argument passed.
 * Return: number of character.
 */
int decimal_to_binary(va_list fmt)
{
	int *binary;
	int i = 0, j = 0, k, l = 0;
	unsigned int value = va_arg(fmt, int), newv;

	if (value == 0)
	{
		_putchar(48);
		l++;
		return (l);
	}
	newv = value;
	while (newv > 0)
	{
		newv /= 2;
		i++;
	}
	binary = malloc(i * sizeof(int));
	if (binary == NULL)
		return (-1);
	while (j < i)
	{
		binary[j] = value % 2;
		value /= 2;
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(binary[k] + 48);
	}
	free(binary);
	return (i);
}
