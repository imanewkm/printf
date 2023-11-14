#include "main.h"
/**
 * _print_hex - prints hexadecimal
 * @h: argument
 * Return: Always 0
 */
int _print_hex(va_list h)
{
	int i = 0;
	int *a;
	int c = 0;
	unsigned int number = va_arg(h, unsigned int);
	unsigned int t = number;

	while (number / 16)
	{
		number /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(int));
	while (i < c)
	{
		a[i] = t % 16;
		t /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (a[i] > 9)
		{
			a[i] = a[i] + 7;
		}
		_putchar(a[i] + '0');
	}
	free(a);
	return (c);
}
