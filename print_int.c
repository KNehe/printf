#include "holberton.h"

/**
 * printnumber - prints number
 * @n: number passed
 * Return: 1
 */

int printnumber(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int digit;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_putchar('-');
	}

	if (long_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}

	i = 1;
	while ((long_num / i) > 9)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		digit = num % 10;
		count++;
		_putchar(digit + '0');
		i = (i / 10);
	}
	return (count);
}

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
	int output;
	int count;

	output = va_arg(arg, int);
	count = printnumber(output);
	return (count);
}
