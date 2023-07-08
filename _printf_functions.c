#include "main.h"
#include "_putchar.c"
#include <stdlib.h>
/**
 * print_string - will print out the string if format correct.
 * @varg : the arguement that we use in function
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
 * print_char - prints a single character to the output
 * @varg : the arguement that we use in function
 * Return: Always 1, its just one character.
 */
print_char(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return (1);
}
/**
 * print_int - prints the integer to the outpout.
 * @varg : the arguement that we use in function
 * Return: Always return count.
 */
int print_int(va_list varg)
{
	long int numb = va_arg(varg, long int);
	int x = 1;
	int count = 0;
	int temp;

	while ((numb / x) > 10)
		x *= 10;
	for (; x >= 1; x /= 10)
	{
		temp = (num / x);
		_putchar(temp + 48);
		temp *= x;
		if (temp != 0)
		{
			numb = numb % temp;
		}
		count += 1;
		if (x == 1)
			return (count);
	}
	return (count);
}
/**
 * print_dec - prints out a decimal number to output
 * @varg : the arguement that we use in function
 * Return: Always the return count
 */
print_dec(va_list varg)
{
	int count = 0;
	int i;
	int numb = va_arg(varg, int);

	for (i = 0; numb[i] != NULL; i++, count++)
		_putchar(numb + 0);
	return (count);
}
