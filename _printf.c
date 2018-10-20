#include "holberton.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, fi, speci;
	spec_t spec[] = {
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'s', print_str},
		{'%', print_per},
		{NULL, NULL}
	};

	va_start (args, format);

	for (fi = 0; format[fi] != '\0'; fi++)
	{
		if (format[fi] == '%')
		{
			fi++;
			for (speci = 0; spec[speci]; speci++)
			{
				if (format[fi] == *(spec[speci].spec))
					spec[speci].f(arg);
			}
		}
		count++;
		_putchar(format[fi]);
	}
	return (count);
}
