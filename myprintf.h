#ifndef MYPRINTF_H
#define PRINT_H

typedef struct specifier
{
	char *spec;
	void (*f)();
} spec_t;

_putchar(char c);
void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_per(va_list args);
#endif
