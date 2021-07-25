#include "holberton.h"

/**
 * op_numbers - main function
 * @arg: The argument pointer.
 *
 * Description: This function prints a intergers and Decimals
 *
 * Return: 0.
 */
int oper_numbers(va_list arg)
{
	unsigned int i, y, r;

	int n = va_arg(arg, int), count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		i = n * -1;
	}
	else
	{
		i = n;
	}

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
