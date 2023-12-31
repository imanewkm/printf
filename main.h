#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
/**
 * struct specifiers - structure
 * @m: the specifier to match after %
 * @func: the function to call
 */
typedef struct specifiers
{
	char *m;
	int (*func)(va_list);
}
sp_t;

/*writes a character*/
int _putchar(char c);

/*printf function*/
int _printf(const char *format, ...);

/*printf a character*/
int _print_char(va_list argument);

/*prints a string*/
int _print_string(va_list argument);

/*search for match and execute the function*/
int (*search_match(const char *next, int position))(va_list);

/*print int*/
int _print_int(va_list args);

/*print binary*/
int _print_binary(va_list b);

/*prints unsigned*/
int _print_unsigned(va_list un);

/*print in octal*/
int _print_octal(va_list o);

/*print hexadecimal*/
int _print_hex(va_list h);

/*print in reverse*/
int _print_reverse(va_list r);

/*convert a string into rot13*/
int _print_rot13(va_list R);

#endif
