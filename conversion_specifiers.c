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
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int c = 0;

	if (fl->fl_hash == 1 && n != 0)
		c += _putchar('0');
	return (print_number(n, 8, 0) + c);
}
/**
 * fo_low_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_low_hex(va_list vl, fl_t *fl)
{
	unsigned long int n = va_arg(vl, unsigned long int);
	unsigned int c = 0;

	if (fl->fl_hash == 1 && n != 0)
		c += _printf("0x");
	return (print_number(n, 16, 0) + c);
}
/**
 * fo_up_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * @fl: flags.
 * Return: count the characters and the numbers.
 */
int fo_up_hex(va_list vl, fl_t *fl)
{
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int c = 0;

	if (fl->fl_hash == 1 && n != 0)
		c += _printf("0X");
	return (print_number(n, 16, 1) + c);
}
