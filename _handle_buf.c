#include "holberton.h"

/**
 * handle_buf - links the buffer characters
 * @buf: buffer pointer
 * @c: charcter to the link.
 * @ibuf: index of buffer pointer.
 * Return: index of buffer pointer.
 */
unsigned int handle_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
