#include "main.h"
/**
  * _print_rot13 -convert a string into rot13.
  * @R: string to convert
  * Return: 0
  */
int _print_rot13(va_list R)
{
	int i, j;
	char *ro;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	ro = va_arg(R, char *);
	if (!ro)
		return (-1);
	for (i = 0; ro[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (ro[i] == in[j])
			{
				_putchar(out[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(ro[i]);
	}
	return (i);
}
