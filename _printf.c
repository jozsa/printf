#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints output according to format
 * @format: string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, fi, speci;
	spec_t spec[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_start(args, format);

	for (fi = 0; format[fi] != '\0'; fi++)
	{
		while (format[fi] != '%' && format[fi] != '\0')
		{
			_putchar(format[fi]);
			count++;
			fi++;
		}
		if (format[fi] != '\0')
			fi++;
		else
			break;
		for (speci = 0; speci < 5; speci++)
		{
			if (format[fi] == *(spec[speci].spec))
			{
				count += spec[speci].f(args);
				break;
			}
		}
	}
	va_end(args);
	return (count);
}
