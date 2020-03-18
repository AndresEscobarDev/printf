#include "holberton.h"
/**
 * _printf - Print everything.
 * @format: Initial string with the formats.
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, fl_t *);
	int i, c = 0;
	va_list vl;
	fl_t fl =  {0, 0, 0};

	va_start(vl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			while (get_flags(format[i], &fl))
				i++;
			if (format[i] == '%')
			{
				c += _putchar('%');
				continue;
			}
			pfunc = get_format(format[i]);
			if (pfunc)
				c += pfunc(vl, &fl);
			else
				_printf("%%%c", format[i]);
		}
		else
			c += _putchar(format[i]);
	}
	_putchar(-1);
	va_end(vl);
	return (c);
}
