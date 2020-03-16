#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
typedef struct fo
{
	char fo;
	void (*f)(va_list);
} fo_t;
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */
