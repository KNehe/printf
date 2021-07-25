#include "holberton.h"

/**
 * oper_octal - main function
 * @y: The argument pointer.
 *
 * Description: This function prints a octal number.
 *
 * Return: The total number of chacarters.
 */

int oper_octal(va_list y)
{
	unsigned int oct = va_arg(y, int), buff[1000];
	int  count = 0, i;

	if (oct == 0)
	{
		_putchar('0');
		return (1);
	}

	while (oct > 0)
	{
		buff[count] = oct % 8;
		oct /= 8;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}