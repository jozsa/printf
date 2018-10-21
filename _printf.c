#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, fi, speci;
	spec_t spec[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{NULL, NULL}
	};

	va_start (args, format);

	for (fi = 0; format[fi] != '\0'; fi++)
	{
		if (format[fi] == '%')
		{
			fi++;
			if (format[fi] == '%')
			{
				_putchar(format[fi]);
				continue;
			}
			for (speci = 0; speci < 3; speci++)
			{
				if (format[fi] == *(spec[speci].spec))
					count += spec[speci].f(args);
			}
			fi++;
		} 
		count++;
		_putchar(format[fi]);
	}
	return (count);
}
