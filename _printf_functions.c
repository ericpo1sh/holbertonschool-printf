#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
printstring(va_list varg)
{
	char *string = va_arg(varg, char *);
	int i = 0;
	int count = 0;

	while (string[i])
	{
		putchar(string[i]);
		i++;
		count++;
	}
	return (count);
}

printchar(va_list varg)
{
	char c = va_arg(varg, int);

	putchar(c);
	return (1);
}



