#include "holberton.h"
/**
 * fo_string - prints a string
 * @vl: va_list from _printf
 * Return: 0
 */
void fo_string(va_list vl)
{
	char *s = va_arg(vl, char*);
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
