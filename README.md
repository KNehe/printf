# C - printf

- This a group project of 2 members. We aim to create a version of C's ```printf``` function found in the standard library ```<stdio.h>```.

## Objectives
- Write a custom printf function
- Use only variadic functions, malloc, free and write
- Print according to given format and specifiers
------------

## Specifiers And Format Tag Prototype
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |

src - https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm

To compile you need a main program, as you wish ... for example:
~~~
int main(void)
{
       _printf("%s%ct%dn", "Holbe", "R", 0);
       return(0);
}
~~~
And execute the following in your terminal:
~~~
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o a
$ ./a
"HolbeRt0n"
$
~~~


### _printf.c
Own Printf Function That Performs Formatted Output Conversion And Print Data.
~~~
~~~
### holberton.h
The Header File Were All Prototypes Are Saved.
~~~
~~~

### print_func.c
Pointer To A Function That Selects The Adequate Function To Perform The required Operation.
~~~
~~~

### man_3_printf

GNU user manual for the _printf function
~~~
~~~

### _putchar.c
Contains the _putchar function, used to print.
~~~
~~~

### print_chr.c
/* identifier "%c" */
Function That Writes The Character C To Stdout
~~~
~~~

### print_str.c
/* identifier "%s" */
Function That Writes The String To Stdout
~~~
~~~

### print_int.c
/* idetifier "%d" or "%i" */
Function That Prints An Integer
~~~
~~~

### print_bnr.c
/* identifier "%b" */
Function That Prints Decimal In Binary.
~~~
~~~

### print_oct.c
/*indentifier "%o" */
Function That Prints Decimal In Octal.
~~~
~~~


### print_rot.c
/* identifier "%R" */
Function That Writes The String To Stdout In Rot13.
~~~
~~~

### print_rev.c
/* identifier "%r" */
Function That Writes The String To Stdout In Reverse.
~~~
~~~

### arg.c
/* identifier "%u" */
This function prints a unsigned int.
~~~
~~~

### print_hex.c
/* identifier "%x" or "%X" */
Has functions that print unsigned hexadecimal in lower and upper case
~~~
~~~

### helpers.c
Has various utility functions
~~~
~~~
### test/main.c
Is the test file
~~~
~~~

### handl_buf.c
Concatenates buffer characters
~~~
~~~

### prints_buf
Prints a buffer
~~~
~~~

### print_S.c
Prints a string. Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: ```\x,``` followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
~~~
~~~

Enviroment:
Ubuntu 14.04.6. LTS vagrant-ubuntu-trusty-64

------------

This Project Was Done By Nehemiah Kamolu
https://github.com/KNehe

------------
And Leslie D. Shumba
https://github.com/layan2k

------------

### End