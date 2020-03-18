#include "holberton.h"
/**
 * fo_binary - Convert a integer base 10 to binary.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_binary(va_list vl, fl_t *fl)
{
	(void)fl;
	return (print_number(va_arg(vl, unsigned int), 2, 0));
}
/**
 * fo_unsigned - print a unsigned base 10 integer.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_unsigned(va_list vl, fl_t *fl)
{
	(void)fl;
	return (print_number(va_arg(vl, unsigned int), 10, 0));
}
/**
 * fo_octal - Convert a integer base 10 to octal.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_octal(va_list vl, fl_t *fl)
{
	if (fl->fl_hash == 1 && n != 0)
	{
		_putchar('0');
		return (print_number(va_arg(vl, unsigned int), 8, 0) + 1);
	}
	return (print_number(va_arg(vl, unsigned int), 8, 0));
}
/**
 * fo_low_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_low_hex(va_list vl, fl_t *fl)
{
	if (fl->fl_hash == 1 && n != 0)
	{
		_putchar('0');
		_putchar('x');
		return (print_number(va_arg(vl, unsigned long int), 16, 0) + 2);
	}
	return (print_number(va_arg(vl, unsigned long int), 16, 0));
}
/**
 * fo_up_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_up_hex(va_list vl, fl_t *fl)
{
	if (fl->fl_hash == 1 && n != 0)
	{
		_putchar('0');
		_putchar('X');
		return (print_number(va_arg(vl, unsigned long int), 16, 1) + 2);
	}
	return (print_number(va_arg(vl, unsigned long int), 16, 1));
}
