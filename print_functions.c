#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _strlen - Counts the length of a string
 * @str: The string to be counted
 */

unsigned int _strlen(const char *str)
{
	unsigned int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * _putchar - Prints a single character to stdout
 * @c: The character to be printed
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_int - Prints an integer to standard output
 */

int print_int(va_list args)
{
	int number, divisor, count = 0, dec;

	number = va_arg(args, int);
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
		count = 1;
	}
	for (divisor = 1; divisor <= number; divisor *= 10)
		;
	while (number)
	{
		divisor /= 10;
		dec = (number / divisor);
		write(1, &dec, 1);
		number %= divisor;
		count++;
	}
	return (count);
}

/**
 * print_char - Prints a character to standard output
 */

int print_char(va_list args)
{
	char c;

        c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}

/**
 * print_str - Prints to the standard output a string passed as an argument to the function
 */

int print_str(va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char*);
	len = _strlen(str);

	if (str == NULL)
		str = "(null)";

	write(1, str, len);

	return (len);
}

/**
 * print_per - Prints to the standard output a percent sign passed as an argument to the function
 *


int print_per(void)
{
	_putchar('%');
	return (0);
}
*/
