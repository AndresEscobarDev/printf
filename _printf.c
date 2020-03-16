#include "holberton.h"
/**
 * _printf - Print everything.
 * @format: Initial string with the formats.
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	fo_t fos[] = {
		{'c', fo_char},
		{'s', fo_string},
		{'%', fo_percent},
		{'i', fo_int},
		{'d', fo_int},
		{0, 0}
	};
	int i, i2, j, c = 0;
	va_list vl;

	va_start(vl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i]; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			i2 = i + 1;
			while (format[i2] == ' ')
				i2++;
			while (fos[j].fo)
			{
				if (format[i2] == fos[j].fo)
				{
					c += fos[j].f(vl);
					i2++;
					i = i2;
					break;
				}
				if (c == -1)
					return (c);
				j++;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			c++;
		}
	}
	va_end(vl);
	return (c);
}
