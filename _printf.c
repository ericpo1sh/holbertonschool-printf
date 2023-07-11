#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - implementation of the OG printf() func.
 * @fmt : string/char/int/dec to print.
 * Return: the number of characters printed to the string.
 */
int _printf(const char *format, ...)
{
	int counter = 0; /* counter for number of characters */
	int i = 0; /* index for fmt */
	va_list args;
	char x;
	va_start (args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	if (format) /* Checking if Format is NULL */
	{
		while (format && format[i]) /* checking if current char isnt NULL */
		{
			if (format[i] == '%') /* checking if current character is identifier*/
			{
				i++;
				if (format[i] == '%') /*if i + 1, we print LITERAL% sign*/
				{
					counter++;
					i++;
					_putchar(format[i]);
				}
				if (format[i] == 's' || format[i] == 'c' || format[i] == 'i' ||
						format[i] == 'd')
				{
					x = format[i];
					if (_identify(x, args))
					{
						counter++;
						_putchar(format[i + 1]);
						i++;
					}
				}
				i++;
			}
			else
			{
				if (format)
				{
				counter++;
				_putchar(format[i]);
				i++;
				}
			}
		}
	}
va_end(args);
return (counter);
}
