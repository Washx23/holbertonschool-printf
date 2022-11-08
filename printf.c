#include "main.h"

/**
 * _printf - replacemet function of the original printf
 * @format: parameters
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list ap);
	va_list ap;
	int i;

	va_start(ap, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = printflags(&format[i]);
			if (f)
			{
				f(ap);
				i++;
			}
		}
		_putchar(format[i]);

	}
	va_end(ap);
	return (0);
}
