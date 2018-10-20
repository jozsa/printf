#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * specifier - Struct for data types and function pointers
 * @spec: The data type to be specified by _printf
 * @f: The corresponding function pointer for each data type
 *
 * Description: Data types specified by _printf have corresponding functions
 */

typedef struct specifier
{
	char *spec;
	void (*f)();
} spec_t;

int _printf(const char *format, ...);
void _putchar(char c);
void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_per(va_list args);
#endif
