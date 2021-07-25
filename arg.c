#include "holberton.h"

/**
 * op_unsigned - main function
 * @arg: The argument pointer.
 *
 * Description: This function prints a unsigned int.
 *
 * Return: 0.
 */
int oper_unsigned(va_list arg)
{
	unsigned int i, y, r;
	unsigned int n = va_arg(arg, int), count = 0;

	i = n;
	y = 1;
	r = i;

	while (r > 9)
	{
		y *= 10;
		r /= 10;
	}

	for (; y >= 1; y /= 10)
	{
		_putchar(((i / y) % 10) + '0');
		count++;
	}
	return (count);
}
