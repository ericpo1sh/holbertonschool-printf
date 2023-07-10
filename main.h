#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdargs.h>
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

int (*_identify(char *x))(va_list);
int _putchar(char c);
int _printf(const char *fmt, ...);
print_string(char *);
print_char(char);
print_int(long int);
print_dec(int);
#endif
