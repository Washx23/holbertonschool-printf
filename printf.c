#include "main.h"
#include <stdio.h>

/**
 * _printf - replacemet function of the original printf
 * @format: parameters
 * Return: cont
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list ap);
	va_list ap;
	int i = 0;
	int cont = 0;

	va_start(ap, format);

	if (format)
	{
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = printflags(format[i]);
			if (f)
			{
				cont += f(ap);
			}
		}
		else
		{
			cont += _putchar(format[i]);
		}
	}
	}
	else
		cont = cont - 1;
	va_end(ap);
	return (cont);
}
