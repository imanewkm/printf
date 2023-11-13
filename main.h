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
int _print_char(va_list c);

/*prints a string*/
int _print_string(va_list s);

/*search for match and execute the function*/
int (*search_match(const char *next, int dino))(va_list);

#endif
