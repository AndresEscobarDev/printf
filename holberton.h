#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct fo - Formats and functions.
 * @fo: Formats.
 * @f: Functions.
 */
typedef struct fo
{
	char fo;
	int (*f)(va_list);
} fo_t;
int (*get_format(char c))(va_list);
int print_number(unsigned long int, int, int);
int _printf(const char *format, ...);
int _putchar(char c);
int fo_char(va_list);
int fo_string(va_list);
int fo_percent(va_list);
int fo_int(va_list);
int fo_binary(va_list);
int fo_unsigned(va_list vl);
int fo_octal(va_list);
int fo_low_hex(va_list);
int fo_up_hex(va_list);

#endif /* HOLBERTON_H */
