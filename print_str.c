#include "holberton.h"

/**
 * oper_string - main function
 * @y: The argument pointer.
 *
 * Description: This function prints a string.
 *
 * Return: The string length.
 */

int oper_string(va_list y)
{
	int i = 0;
	char *s;

	s = va_arg(y, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
