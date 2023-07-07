#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdargs.h>
int _printf(const char *fmt, ...);
int _putchar(char c);

typedef struct identify
{
	char *type;
	int (*f)(va_list);

} pfmt;

print_string(char *);
print_char(char);
print_int(long int);
print_dec(int);
#endif
