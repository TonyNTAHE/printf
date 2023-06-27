#include "main.h"
/**
 * get_spec - find specifer to use.
 * @s: character.
 * @fmt: argument.
 * Return: number of character printed.
 */
int get_spec(char s, va_list fmt)
{
	ch_s arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{NULL, NULL}
	};
	int i = 0;

	while (arr[i].s)
	{
		if (s == *(arr[i].s))
			return (arr[i].f(fmt));
		i++;
	}
	return (0);
}
