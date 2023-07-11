#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>
/**
* struct identify - Struct to find the corresponding type.
* @type: type.
* @f: The function that points to the type to cast it.
*/
typedef struct identify
{
	char *type;
	int (*f)(va_list);

} pfmt;


int _printf(const char *format, ...);
int _identify(char x, va_list args);
int _charchecker(char _type);
int print_string(va_list);
int print_char(va_list);
int print_num(va_list);
int _putchar(char c);
#endif
