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
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
#endif
