#include "main.h"
/**
 * _print_unsigned - prints unsigned number
 * @un: argument
 * Return: Always 0
 */
int _print_unsigned(va_list un)
{
	unsigned int n, number;
	int i, div = 1;

	n = va_arg(un, unsigned int);
	number = n;
	i = 0;

	while (number / div > 9)
	{
		div *= 10;
	}
	while (div)
	{
		i += _putchar(number / div + '0');
		number %= div;
		div /= 10;
	}
	return (1);
}
