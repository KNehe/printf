#include "holberton.h"

/**
  * print_hex_lower - prints lower case hexadecimal
  * @arg: va_list parameter
  * Return: Number of printed characters
  */
int print_hex_lower(va_list arg)
{
	unsigned int i = 0, count = 0;
	char *s;
	char range[17] = "0123456789abcdef";

	i = va_arg(arg, unsigned int);
	s = convert_num_to_base(range, i, 16);
	_puts(s);
	count = _strlen(s);
	return (count);
}


/**
  * print_hex_upper - prints upper case hexadecimal
  * @arg: va_list parameter
  * Return: Number of printed characters
  */
int print_hex_upper(va_list arg)
{
	unsigned int i = 0, count = 0;
	char *s;
	char range[17] = "0123456789ABCDEF";

	i = va_arg(arg, unsigned int);
	s = convert_num_to_base(range, i, 16);
	_puts(s);
	count = _strlen(s);
	return (count);
}
