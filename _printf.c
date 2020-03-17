#include "holberton.h"
/**
 * _printf - Print everything.
 * @format: Initial string with the formats.
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list);
	int i, c = 0;
	va_list vl;

	va_start(vl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ' && format[i])
				i++;
			if (!format[i])
				return (-1);
			if (format[i] == '%')
			{
				c += _putchar('%');
				continue;
			}
			pfunc = get_format(format[i]);

			if (pfunc)
				c += pfunc(vl);
			else
			{
				c += _putchar('%');
				if (format[i - 1] == ' ')
					c += _putchar(' ');
				c += _putchar(format[i]);
			}
		}
		else
			c += _putchar(format[i]);
	}
	va_end(vl);
	return (c);
}
