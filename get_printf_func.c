#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * identify - will find the correct fomat for our type.
 * @x : looks for the identifiers s, c, i ,d
 * Return: the type to another file.
 *
 */
int _identify(char x, va_list args)
{
	pfmt id[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_num},
		{"d", print_num},
		{"%", print_char},
		{NULL, NULL}
	};
	int i = 0;
	int counter = 0;

	while (id[i].type)
	{
		if (*(id[i].type) == x)
			counter = id[i].f(args);
		i++;
	}
	return (counter);
}
