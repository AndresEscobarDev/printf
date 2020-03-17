#include "holberton.h"
/**
 * fo_int - prints an integer
 * @vl: va_list from _printf
 * Return: count of characters and the number
 */
int fo_int(va_list vl)
{
	int i = va_arg(vl, int);
	unsigned int n;

	if (i < 0)
	{
		n = -i;
		_putchar('-');
		return (print_number(n, 10, 0) + 1);
	}
	else
	{
		n = i;
		return (print_number(n, 10, 0));
	}
}

/**
 * print_number - prints a number
 * @n: int from va_list.
 * @base: Base to convert.
 * @c: hex in lower or upper case.
 * Return: count of characters and the number
 */
int print_number(unsigned long int n, int base, int c)
{
	int count = 0;

	if (n / base)
		count += print_number(n / base, base, c);
	if (n % base > 9 && c == 0)
		return (_putchar((n % base) + 87) + count);
	else if (n % base > 9 && c == 1)
		return (_putchar((n % base) + 55) + count);
	return (_putchar((n % base) + '0') + count);
}

/**
 * fo_pointer - print an address.
 * @vl: Va list.
 * Return: _printf function.
 */
int fo_pointer(va_list vl)
{
	unsigned long int i = va_arg(vl, unsigned long int);

	if (!i)
		return (_printf("(nil)"));
	return (_printf("0x%x", i));

}