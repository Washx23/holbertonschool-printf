#include "main.h"
int border_case(__attribute__((unused))va_list ap);
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

	if (format)
	{
	for (j = 0; j < 5; j++)
	{
		if (format == func[j].c)
			return (func[j].f);
	}
	_putchar('%');
	_putchar(format);
	return (border_case);
	}
	else
		return (NULL);
	return (0);
}
/**
 * border_case - funcion to return 2
 * @ap: arguments
 * Return: 2
 */
int border_case(__attribute__((unused))va_list ap)
{
	return (2);
}
