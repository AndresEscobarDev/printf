#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fl - struct with the flags.
 * @fl_plus: switch for plus flag.
 * @fl_space: switch for space flag.
 * @fl_hash: switch for the hash flag.
 */
typedef struct fl
{
	unsigned int fl_plus;
	unsigned int fl_space;
	unsigned int fl_hash;
} fl_t;
/**
 * struct fo - Formats and functions.
 * @fo: Formats.
 * @f: Functions.
 */
typedef struct fo
{
	char fo;
	int (*f)(va_list, fl_t *);
} fo_t;

int (*get_format(char c))(va_list, fl_t *);
int get_flags(char c, fl_t *);
int print_number(unsigned long int, int, int);
int _printf(const char *format, ...);
int _putchar(char c);
int fo_char(va_list, fl_t *);
int fo_string(va_list, fl_t *);
int fo_int(va_list, fl_t *);
int fo_binary(va_list, fl_t *);
int fo_unsigned(va_list, fl_t *);
int fo_octal(va_list, fl_t *);
int fo_low_hex(va_list, fl_t *);
int fo_up_hex(va_list, fl_t *);
int fo_String(va_list, fl_t *);
int fo_pointer(va_list, fl_t *);
int fo_rev_string(va_list, fl_t *);
int fo_ROT13(va_list, fl_t *);

#endif /* HOLBERTON_H */
