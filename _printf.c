#include "holberton.h"

/**
 * _printf -  output conversion that prints data.
 * @format: is the input str.
 * @...: The parameters to print.
 *
 * Return: number of chars printed.
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	int i = 0, count = 0;

	va_start(arguments, format);

	if (!format || format[i] == '\n' || format[i] == '\0' ||
	   (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			count += print_func(&i, format, arguments);

		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arguments);
	return (count);
}
