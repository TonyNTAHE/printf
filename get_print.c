#include "main.h"

/**
 * get_print - function pointer.
 * @c: characters.
 * Return: point to function.
 */
int (*get_print(char *c))(va_list arg, const char *format)
{
	fun ar[] = {
		{"s", print_string},
		{"c", print_char},
		{"%", print_presign},
		{0, NULL}
	};
	int i = 0;

	while (ar[i].fsp)
	{
		if (*c == *(ar[i].fsp))
		{
			return (ar[i].print);
		}
		i++;
	}
	return (NULL);
}
