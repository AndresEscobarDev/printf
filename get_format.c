#include "holberton.h"
/**
 * get_format - Get the format and call the functions.
 * @c: format.
 * Return: NULL or pointer.
 */
int (*get_format(char c))(va_list)
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
