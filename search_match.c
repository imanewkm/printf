#include "main.h"
/**
 * search_match - search for match and execute for the associate function
 * @next: the character to match
 * @position: the position of next
 * Return: function where it matches and if there is no match
**/
int (*search_match(const char *next, int position))(va_list)
{
	int i;
	sp_t opt[] = {
		{"s", _print_string},
		{"c", _print_char},
		{NULL, NULL}
	};

	for (i = 0; opt[i].m != NULL; i++)
		if (opt[i].m[0] == next[position])
			return (opt[i].func);
	return (NULL);
}
