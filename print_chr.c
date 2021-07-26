#include "holberton.h"

/**
 * oper_char - main function
 * @y: The argument pointer.
 *
 * Description: This function prints a char.
 *
 * Return: 1.
 */

int oper_char(va_list y)
{
	_putchar(va_arg(y, int));
	return (1);
}
