#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _putchar - Prints a single character to standard output
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_int - Prints an integer to standard output
 *

int print_int(va_list args)
{
	int length, index;
	int number;

	number = va_arg(args, int);

	for (length = 1; number[length] != '\0'; length++)
		;
	for (index = 0; index < length; index++)
		_putchar(number[index] + '0');
	return (length);
}

**
 * print_char - Prints a character to standard output
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}

/**
 * print_str - Prints to the standard output a string passed as an argument to the function
 */

int print_str(va_list args)
{
	int length, index;
	char *str;

	str = va_arg(args, char*);

	for (length = 1; str[length] != '\0'; length++)
		;
	for (index = 0;index <length;index++)
		_putchar(str[index]);
	return (length);
}

/**
 * print_per - Prints to the standard output a percent sign passed as an argument to the function


int print_per(va_list args)
{
	_putchar('\%');
	return (0);
}
*/
