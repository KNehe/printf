#include "holberton.h"

/**
 * print_func - main function.
 * @format: The dimension of the parameters passed.
 * @...: The parameters to print.
 * @i: The pointer of the format position.
 * @arguments: The variable to print.
 *
 * Description: This function selects the correct function
 * asked by the user for calls it.
 *
 * Return: The total number of characters of the functions called.
 */

int print_func(int *i, const char *format, va_list arguments)
{
	int count = 0;
	int k = *i, l = 0;

	print_t ops[] = {
		{"c", oper_char},
		{"s", oper_string},
		{"%", oper_percent},
		{"d", oper_numbers},
		{"i", oper_numbers},
		{"u", oper_unsigned},
		{"o", oper_octal},
		{"b", oper_binary}, {"S", print_S},
		{"r", print_rev}, {"R", rot13},
		{"x", print_hex_lower}, {"X", print_hex_upper},
		{NULL, NULL}
	};

	int c = 0;

	while (c < 13)
	{
		if (*(ops[c].oper) == format[k + 1])
		{
			count += ops[c].f(arguments);
			*i += 1;
		}
		else
		{
			l++;
		}
		c++;
	}

	if (l == 13)
	{
		_putchar(format[k]);
		count++;
	}

	return (count);
}
