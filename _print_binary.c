#include "main.h"
/**
 * _print_binary - prints int converted to binary
 * @b: argument
 * Return: binary number
 */
int _print_binary(va_list b)
{
	unsigned int counter, j, i, l, m, number;
	int c = 0;

	m = va_arg(b, unsigned int);
	if (m)
	{
		number = m;
		while (number)
		{
			number /= 2;
			counter++;
		}
		j = 1;
		i = 1;
		while (i <= counter - 1)
		{
			j *= 2;
			i++;
		}
		i = 1;
		while (i <= counter)
		{
			l = number / j;
			_putchar(l + '0');
			c++;
			number -= l * j;
			j /= 2;
			i++;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
