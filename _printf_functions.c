#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - will print out the string if format correct.
 * @varg : the arguement that we use in function
 * Return: count of the ammount of characters printed.
 */
int print_string(va_list varg)
{
	char *string = va_arg(varg, char *);
	int i = 0;
	int count = 0;

	if (varg != NULL)
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
int print_char(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return (1);
}
/**
 * print_num - prints out a decimal number to output
 * @varg : the arguement that we use in function
 * Return: Always the return count
 */
int print_num(va_list varg)
{
	int len, powten, i, digit , x = 0;
	int numb;
	int count = 0;

	x = va_arg(varg, int);
	if (x != 0)
	{
		if (x < 0)
		{
			_putchar('-');
			count++;
		}
		numb = x;
		len = 0;
		while (numb != 0)
		{
			numb /= 10;
			len++;
		}
		powten = 1;
		for (i = 1; i <= len - 1; i++)
			powten *= 10;
		for (i = 1; i <= len; i++)
		{
			digit = x / powten;
			if (x < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			x -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
