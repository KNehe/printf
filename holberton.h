#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *struct print - structure for different types of cases
 * struct print - is the struct for printer functions
 * @f: is the pointer to a printer functions
 * @type_arg: is the identifier
 *
 * Description: struct stores pointers to the
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int (*print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_buf(char *buf, unsigned int nobuf);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);

#endif
