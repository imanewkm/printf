#include "main.h"
/**
 * _print_octal - prints an octal number
 * @o: argument
 * Return: Always 0
 */
int _print_octal(va_list o)
{
	unsigned int length, t, i, dig, n, number;
	int c = 0;

	n = va_arg(o, unsigned int);
	if (n)
	{
		number = n;
		length = 0;
		while (number)
		{
			number /= 8;
			length++;
		}
		t = 1;
		for (i = 1; i <= length - 1; i++)
		{
			t *= 8;
		}
		for (i = 1; i <= length; i++)
		{
			dig = n / t;
			_putchar(dig + '0');
			c++;
			n -= dig * t;
			t /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
