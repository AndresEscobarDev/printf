#include "holberton.h"
/**
 * fo_int - prints an integer
 * @vl: va_list from _printf
 * Return: count of characters and the number
 */
int fo_int(va_list vl)
{
	int i = va_arg(vl, int);

	return (print_number(i));
}

/**
 * print_number - prints a number
 * @n: int from va_list
 * Return: count of characters and the number
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		n = -n;
		count += _putchar('-');
	}
	if (n / 10)
		count += print_number(n / 10);
	return (_putchar((n % 10) + '0') + count);
}
