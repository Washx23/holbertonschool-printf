#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_str - function thats print string
 * @ap: parameters
 * Return: 0
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str)
	{
	for (i = 0; *str; i++)
	{
		_putchar(*str);
		str = str + 1;
	}
	}
	else
	{
		return (write(1, "(null)", 6));
	}
	return (i);
}

/**
 * print_perc - function thats prints %
 * @ap: parameters
 * Return: 0
 */
int print_perc(__attribute__((unused))va_list ap)
{
	return (_putchar('%'));
}

/**
 * print_char - function thats print character
 * @ap: parameters
 * Return: 0
 */
int print_char(va_list ap)
{
	int c = va_arg(ap, int);

	return (write(1, &c, 1));
}
/**
 * print_int - function thats print integer
 * @n: parameters
 *
 * Return: 0
 */
int print_int(int n)
{
	int cont = 0;

	if (n < 0)
	{
		cont += _putchar('-');
	n = n * (-1);
	}
	if (n > 9)
		cont += print_int(n / 10);
	{
	cont += _putchar('0' + (n % 10));
	}
	return (cont);
}
/**
 * val_n - function thats return function
 * @ap: parameters
 * Return: function
 */
int val_n(va_list ap)
{
	int n = va_arg(ap, int);

	return (print_int(n));
}
