#include "holberton.h"

/**
 * oper_binary - main function
 * @y: The argument pointer.
 *
 * Description: This function prints a binary number.
 *
 * Return: The total number of characters.
 */

int oper_binary(va_list y)
{
	unsigned int bin = va_arg(y, int), buff[1000];
	int  count = 0, i;

	if (bin == 0)
	{
		_putchar('0');
		return (1);
	}

	while (bin > 0)
	{
		buff[count] = bin % 2;
		bin /= 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}
