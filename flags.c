#include "main.h"

/**
 * printflags - the funcion that contains the printf flags
 * @format: formats
 * Return: always
 */

int (*printflags(const char format))(va_list)
{
	perc func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'\0', NULL}
	};
	int j;

	for (j = 0; j < 5; j++)
	{
		if (format == func[j].c)
		{
			return (func[j].f);
		}
	}
	return (0);
}
