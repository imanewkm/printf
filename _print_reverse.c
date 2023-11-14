#include "main.h"
/**
*_print_reverse - prints reversed string
*@r: argument
*Return: 0
*/
int _print_reverse(va_list r)
{
	char *s;
	int i, j = 0;

	s = va_arg(r, char *);
	if (!s)
		s = ")llun(";
	for (i = 0; s[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
		j++;
	}
	return (j);
}
