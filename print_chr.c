#include "holberton.h"

/**
 * ope_char - main function
 * @y: The argument pointer.
 *
 * Description: This function prints a char.
 *
 * Return: 1.
 */
int oper_char(va_list y)
{
	int container = (char)va_arg(y, int);

	_putchar(container);

	return (1);
}
