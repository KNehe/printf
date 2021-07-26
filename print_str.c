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
	char *str;
	int i;

	str = (va_arg(y, char*));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
