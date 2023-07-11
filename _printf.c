#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - implementation of the OG printf() func.
 * @format : string/char/int/dec to print.
 * Return: the number of characters printed to the string.
 */
int _printf(const char *format, ...)
{
	int counter = 0; /* counter for number of characters */
	int i = 0; /* index for fmt */
	va_list args;
	char x;
	int flag = 0;

	va_start(args, format); /* start */

	if (format == NULL || (format[0] == '%' && format[1] == '\0')) /* checking if first and second space are valid */
		return (-1);

	while (format && format[i]) /* checking if frmt and current char isnt NULL */
	{
		if (format[i] == '%') /* checking if current character is identifier */
		{
			i++;
			x = format[i];
			d = counter;
			counter += _identify(x, args); /* starting our function checker */
			if (format[i] == '%') /* if there are two %'s, we print LITERAL % sign */
			{
				_putchar(format[i]);
				counter++;
				i++; /* move to the next spot over */
			}
			else if (counter <= d) /* this is our flag */
			{
				if (x != '\0') /* if our current character isnt \0 then we.. */
				{
					if (format[i - 1] == '%') /* check if the previous char is a % */
					{
						if (format[i] == 's') /* check if we are at the NULL string 's' */
						{
							flag = 100; /* set our flag to 100 */
						}
						else /* if s not found then we will put our % and our fake identifier */
						{
							_putchar(format[i - 1]);
							_putchar(format[i]);
							counter += 2; /* move up two spots bc we printed 2 chars */
						}
					}
				}
				else
				{
					counter++; /* if null found raise counter by 1 */
				}
				i++; /* move to the next spot */
			}
			else /* if counter is bigger than flag then we will move one over */
				i++;
		}
		else /* if no % found then will go on to print whats inside */
		{
			if (format) /* if format still true */
			{
			counter++;
			_putchar(format[i]);
			i++;
			}
		}
		if (flag == 100) /* if our flag was changed then increment count because we printed a (null) */
		{
			counter++;
		}
	}
va_end(args);
return (counter); /* end and return the counter */
}
