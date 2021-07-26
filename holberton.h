#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 *struct print - structure for different types of cases
 * struct print - is the struct for printer functions
 * @f: is the pointer to a printer functions
 * @oper: is the identifier
 *
 * Description: struct stores pointers to the
 * printer functions.
 */
typedef struct print
{
	char *oper;
	int (*f)(va_list y);
} print_t;

/* General Prototypes */

int _printf(const char *format, ...);
int print_func(int *i, const char *format, va_list arguments);

/* Putchar */
int _putchar(char c);

/* Main Prototypes*/

int oper_char(va_list y);
int oper_string(va_list y);
int oper_percent(va_list y);
int oper_numbers(va_list arg);

/* Advanced Prototypes*/

int oper_unsigned(va_list arg);
int oper_binary(va_list y);
int oper_octal(va_list y);
int rot13(va_list y);
int print_rev(va_list y);
int printnumber(int n);
int print_hex_lower(va_list arg);
int print_hex_upper(va_list arg);
int _strlen(char *s);
/* print string without va_list */
void _puts(char *s);
char *convert_num_to_base(char range[], unsigned int num, int base);
int print_S(va_list list);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);

#endif
