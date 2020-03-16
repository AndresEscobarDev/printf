#include "holberton.h"
/**
 * fo_char - prints a char
 * @vl: va_list from _printf
 * Return: 0
 */
void fo_char(va_list vl)
{
	_putchar(va_arg(vl, int));
}
