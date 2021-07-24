#include "holberton.h"

/**
 * handle_buf - links the buffer characters
 * @buf: buffer pointer
 * @c: charcter to the link.
 * @inbuf: index of buffer pointer.
 * Return: index of buffer pointer.
 */
unsigned int handle_buf(char *buf, char c, unsigned int inbuf)
{
	if (inbuf == 1024)
	{
		print_buf(buf, inbuf);
		inbuf = 0;
	}
	buf[inbuf] = c;
	inbuf++;
	return (inbuf);
}
