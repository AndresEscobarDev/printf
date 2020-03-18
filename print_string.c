#include "holberton.h"
/**
 * fo_string - prints a string
 * @vl: va_list from _printf
 * @fl: flags.
 * Return: count of characters
 */
int fo_string(va_list vl, fl_t *fl)
{
	char *s = va_arg(vl, char*);
	int i = 0;

	(void)fl;
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
 * @fl: flags.
 * Return: count of characters
 */
int fo_String(va_list vl, fl_t *fl)
{
	char *s = va_arg(vl, char*);
	int i = 0, count = 0;

	(void)fl;
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
/**
 * fo_rev_string - prints a string in reverse.
 * @vl: va_list from _printf
 * @fl: flags.
 * Return: count of characters
 */
int fo_rev_string(va_list vl, fl_t *fl)
{
	char *s = va_arg(vl, char *);
	int i = 0, j = 0;

	(void)fl;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	return (i);
}
/**
 * fo_ROT13 - prints a string in ROT13.
 * @vl: va_list from _printf
 * @fl: flags.
 * Return: count of characters
 */
int fo_ROT13(va_list vl, fl_t *fl)
{
	int i, j;
	char *c = va_arg(vl, char *);
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	(void)fl;
	for (i = 0; c[i]; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				_putchar(b[j]);
				break;
			}
		}
	}
	return (i);
}
