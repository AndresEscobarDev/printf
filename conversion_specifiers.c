#include "holberton.h"
/**
 * fo_binary - Convert a integer base 10 to binary.
 * @vl: va list.
 * Return: count the characters and the numbers.
 */
int fo_binary(va_list vl)
{
	return (print_number(va_arg(vl, unsigned int), 2, 0));
}
/**
 * fo_unsigned - print a unsigned base 10 integer.
 * @vl: va list.
 * Return: count the characters and the numbers.
 */
int fo_unsigned(va_list vl)
{
	return (print_number(va_arg(vl, unsigned int), 10, 0));
}
/**
 * fo_octal - Convert a integer base 10 to octal.
 * @vl: va list.
 * Return: count the characters and the numbers.
 */
int fo_octal(va_list vl)
{
	return (print_number(va_arg(vl, unsigned int), 8, 0));
}
/**
 * fo_low_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * Return: count the characters and the numbers.
 */
int fo_low_hex(va_list vl)
{
	return (print_number(va_arg(vl, unsigned int), 16, 0));
}
/**
 * fo_up_hex - Convert a integer base 10 to hex.
 * @vl: va list.
 * Return: count the characters and the numbers.
 */
int fo_up_hex(va_list vl)
{
	return (print_number(va_arg(vl, unsigned int), 16, 1));
}
