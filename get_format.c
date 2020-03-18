#include "holberton.h"
/**
 * get_format - Get the format and call the functions.
 * @c: format.
 * Return: NULL or pointer.
 */
int (*get_format(char c))(va_list, fl_t *)
{
fo_t fos[] = {
		{'c', fo_char},
		{'s', fo_string},
		{'i', fo_int},
		{'d', fo_int},
		{'b', fo_binary},
		{'u', fo_unsigned},
		{'o', fo_octal},
		{'x', fo_low_hex},
		{'X', fo_up_hex},
		{'S', fo_String},
		{'p', fo_pointer},
		{'r', fo_rev_string},
		{'R', fo_ROT13},
		{0, 0}
	};
	int i;


	for (i = 0; fos[i].fo; i++)
	{
		if (fos[i].fo == c)
			return (fos[i].f);
	}
	return (NULL);
}
/**
 * get_flags - switch on the flags.
 * @c: char to compare.
 * @fl: structure flag from _printf.
 * Return: 1 or 0;
 */
int get_flags(char c, fl_t *fl)
{
	if (c == '+')
	{
		fl->fl_plus = 1;
		return (1);
	}
	else if (c == ' ')
	{
		fl->fl_space = 1;
		return (1);
	}
	else if (c == '#')
	{
		fl->fl_hash = 1;
		return (1);
	}
	return (0);
}
