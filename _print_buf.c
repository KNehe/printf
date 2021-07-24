#include "holberton.h"

/**
 * _print_buf - prints the buffer.
 * @buf: the buffer pointer.
 * @nobuf: number of bytes to print.
 * Return: number of bytes printed.
 */
int _print_buf(char *buf, unsigned int nobuf)
{
	return (write(1, buf, nobuf));
}
