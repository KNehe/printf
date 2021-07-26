#include "holberton.h"

/**
  * print_S - prints custom specifier
  * @list: va_list
  * Return: number of characters printed
  */
int print_S(va_list list)
{
	int count = 0, i = 0;
	char *str = va_arg(list, char *);
	char c;
	char range[17] = "0123456789ABCDEF";
	char *s;

	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			count += 3;
			s = convert_num_to_base(range, (unsigned int)c, 16);
			_puts(s);
			count += _strlen(s);
		}
		else
		{
			_putchar(c);
			count++;
		}
		i++;
	}
	return (count);
}
