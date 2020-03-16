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
void fo_char(va_list);
void fo_string(va_list);
void fo_percent(va_list);

#endif /* HOLBERTON_H */
