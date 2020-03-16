#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
typedef struct fo
{
	char fo;
	int (*f)(va_list);
} fo_t;
int print_number(int);
int _printf(const char *format, ...);
int _putchar(char c);
int fo_char(va_list);
int fo_string(va_list);
int fo_percent(va_list);
int fo_int(va_list);

#endif /* HOLBERTON_H */
