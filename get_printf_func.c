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
int (*_identify(char *x))(va_list)
{
	pfmt id[] = {
		{"s", printstring},
		{"c", printchar},
		{"i", printint},
		{"d", printdec},
		{NULL, NULL}
	};
	int i = 0;

	if (x != NULL)
		while (id[i].type != NULL && *(id[i].type) != *x)
			i++;
	return (id[i].f);
}
