#include "holberton.h"
/**
 * fo_string - prints a string
 * @vl: va_list from _printf
 * Return: count of characters
 */
int fo_string(va_list vl)
{
	char *s = va_arg(vl, char*);
	int i = 0;

	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * fo_String - prints a string
 * @vl: va_list from _printf
 * Return: count of characters
 */
int fo_String(va_list vl)
{
	char *s = va_arg(vl, char*);
	int i = 0, count = 0;

	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			if (s[i] <= 15)
				count += _printf("\\x0%X", s[i]);
			else
				count += _printf("\\x%X", s[i]);
			i++;
		}
		else
		{
			count += _putchar(s[i]);
			i++;
		}
	}
	return (count);
}
