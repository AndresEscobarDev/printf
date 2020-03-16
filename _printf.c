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
		{0, 0}
	};
	int i, j;
	va_list vl;

	va_start(vl, format);
	for (i = 0; format[i]; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			while (fos[j].fo)
			{
				if (format[i] == fos[j].fo)
				{
					fos[j].f(vl);
					break;
				}
				j++;
			}
		}
		if (format[i])
			_putchar(format[i]);
	}
	return (0);
}
