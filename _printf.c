#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - implementation of the OG printf() func.
 * @fmt : string/char/int/dec to print.
 * Return: the number of characters printed to the string.
 */
int _printf(const char *fmt, ...)
{
	int counter = 0; /* counter for number of characters */
	int i = 0; /* index for fmt */
	va_list args;
	char x;
	va_start(args, fmt);

	if (fmt == NULL || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);

	if (!fmt) /* Checking if Format is NULL */
	{
		while (!fmt[i]) /* checking if current char isnt NULL */
		{
			if (fmt[i] == '%') /* checking if current character is identifier */
			{
				if (fmt[i + 1] == '%') /* if i + 1, we print LITERAL % sign */
				{
				counter++;
				i++;
				_putchar(fmt[i]);
				}
				if (_identify(x, args) == 0)
				{
					x = fmt[i + 1];
					counter++;
					_putchar(fmt[i + 1]);
					i++;
				}
					i++;
			}
			else
			{
				counter++;
				_putchar(fmt[i]);
				i++;
			}
		}
	}
va_end(args);
return (counter);
}
