#include "holberton.h"

/**
  * _strlen - Finds string length
  * @s: Pointer to string
  * Return: string length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
  * _puts - Prints a string
  * does not take va_list
  * @s: Pointer to string
  * Return: void
  */
void _puts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(s[i]);
	}
}

/**
  * convert_num_to_base - Convert numbers from one base to another
  * @range: Range of characters e.g "012345678ABCDEF"
  * @num: Number to change
  * @base: Base to convert num to
  * Return: Num into a char pointer
  */
char *convert_num_to_base(char range[], unsigned int num, int base)
{
	char *ptr;
	static char buffer[128];
	int mod = 0;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = num % base;
		*--ptr = range[mod];
		num /= base;
	} while (num != 0);
	return (ptr);
}
