#include "main.h"

/**
 * _print_string - function that prints a string
 * @argument: the variadic argument from the printf function
 * Return: amount of characters printed
**/
int _print_string(va_list argument)
{
	char *str;
	int i;

	str = va_arg(argument, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
