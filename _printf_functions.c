#include "main.h"
#include "_putchar.c"
#include <stdlib.h>
/**
 * print_string - will print out the string if format correct.
 * 
 * Return: count of the ammount of characters printed.
 */
print_string(va_list varg)
{
	char *string = va_arg(varg, char *);
	int i = 0;
	int count = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_char - prints a single character that was provided
 *
 * Return: Always 1, its just one character.
 */
print_char(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return (1);
}

print_dec(va_list d)
{
	int i = 0;

	if (d != NULL)
		i = 




