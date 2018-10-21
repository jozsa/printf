#ifndef MYPRINTF_H
#define PRINT_H
#include <stdarg.h>
typedef struct specifier
{
	char *spec;
	int (*f)();
} spec_t;

int _printf(const char *format, ...);
void _putchar(char c);
void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_per(va_list args);
#endif
