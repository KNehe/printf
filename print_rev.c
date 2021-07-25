#include "holberton.h"

/**
 * print_rev - main function
 * @y: The argument pointer.
 *
 * Description: This function reverse a string.
 *
 * Return: The total number of characters.
 */
int print_rev(va_list y)
{
	int i = 0, count = 0;
	char *s = va_arg(y, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
