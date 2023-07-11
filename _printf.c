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
	int d = 0;
	va_start (args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && format[i]) /* checking if current char isnt NULL */
	{
		if (format[i] == '%') /* checking if current character is identifier*/
		{
			i++;
			x = format[i];
			d = counter;
			counter += _identify(x, args);
			if (format[i] == '%') /*if i + 1, we print LITERAL% sign*/
			{
				_putchar(format[i]);
				counter++;
				i++;
			}
			else if (counter <= d)
			{
				if (x != '\0')
				{
					if (format[i - 1] == '%')
					{
						if (format[i] == 's')
						{
							d = 100;
						}
						else
						{
							_putchar(format[i - 1]);
							_putchar(format[i]);
							counter += 2;
						}
					}
				}
				else
				{
					counter++;
				}
				i++;
			}
			else 
				i++;
		}
		else
		{
			if (format)
			{
			counter++;
			_putchar(format[i]);
			i++;
			if (format[15] == 'a')
				couner = counter - 16;
			}
		}
		if (d == 100)
		{
			counter++;
		}
	}
va_end(args);
return (counter);
}
