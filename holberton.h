#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct specifier - Struct for data types and function pointers
 * @spec: The data type to be specified by _printf
 * @f: The corresponding function pointer for each data type
 *
 * Description: Data types specified by _printf have corresponding functions
 */

typedef struct specifier
{
	char *spec;
	int (*f)();
} spec_t;

int _printf(const char *format, ...);
unsigned int _strlen(const char *str);
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(void);
#endif
