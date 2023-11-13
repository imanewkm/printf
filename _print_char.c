#include "main.h"
/**
 * _print_char - function that prints a character
 * @argument: the variadic argument from the printf function
 * Return: amount of characters printed (one).
**/
int _print_char(va_list argument)
{
	char c = (char) va_arg(argument, int);

	_putchar(c);

	return (1);
}
