#include <stdarg.h>
#include "main.h"
#include "_putchar.c"
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
	va_start(args, fmt);

	if (fmt != NULL) /* Checking if Format is NULL */
	{
		while (fmt[i] != NULL) /* checking if current char isnt NULL */
			{
				if (fmt[i] == '%') /* checking if current character is identifier */
				{
					if (fmt[i + 1] == '%') /* if i + 1, we print LITERAL % sign */
					{
						counter++

