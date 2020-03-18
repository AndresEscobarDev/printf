#include "holberton.h"
/**
 * fo_char - prints a char
 * @vl: va_list from _printf
 * @fl: flags.
 * Return: 0
 */
int fo_char(va_list vl, fl_t *fl)
{
	(void)fl;
	return (_putchar(va_arg(vl, int)));
}
